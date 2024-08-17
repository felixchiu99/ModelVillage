// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModelVillageCharacter.h"
#include "ModelVillageProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "APTG_PlaceableTileGrid.h"
#include "APT_PlaceableTile.h"
#include "S_TileType.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AModelVillageCharacter

AModelVillageCharacter::AModelVillageCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	PlaceablePreviewMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaceablePreviewMesh"));
	PlaceablePreviewMesh->SetRelativeScale3D(FVector(m_PreviewScale, m_PreviewScale, m_PreviewScale));
	PlaceablePreviewMesh->SetVisibility(false);

}

void AModelVillageCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	InitTileType();
}

void AModelVillageCharacter::Tick(float DeltaTime)
{
	DisplayPreview();
}

//////////////////////////////////////////////////////////////////////////// Input

void AModelVillageCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AModelVillageCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AModelVillageCharacter::Look);

		// Interact
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AModelVillageCharacter::Interact);

		// Rotate
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Started, this, &AModelVillageCharacter::Rotate);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void AModelVillageCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AModelVillageCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
	GetLookedAt();
}

void AModelVillageCharacter::Interact(const FInputActionValue& Value)
{
	GetMappedKeys(InteractAction);

	PlaceTile();
}

void AModelVillageCharacter::Rotate(const FInputActionValue& Value)
{
	m_PreviewRotation++;
	if (m_PreviewRotation >= 4) {
		m_PreviewRotation = 0;
	}
	PlaceablePreviewMesh->AddLocalRotation(FRotator(0, 90 ,0));
}

FString AModelVillageCharacter::GetMappedKeys(UInputAction* QueryAction)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			auto keys = Subsystem->QueryKeysMappedToAction(QueryAction);
			if (!keys.IsEmpty()) {
				return keys[0].ToString();
			}
		}
	}
	return "N/A";
}

void AModelVillageCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AModelVillageCharacter::GetHasRifle()
{
	return bHasRifle;
}

void AModelVillageCharacter::InitTileType()
{
	TileTypeMap = TileTypeTable->GetRowNames();

	FS_TileType* row = TileTypeTable->FindRow<FS_TileType>(TileTypeMap[m_TileTypeSelection], "", true);
	SetTileType(row);
}

void AModelVillageCharacter::SetTileType(FS_TileType* row)
{
	TileType = row->TileType;
	PlaceablePreviewMesh->SetStaticMesh(row->PreviewMesh);
}

void AModelVillageCharacter::GetLookedAt()
{
	FVector Start;
	FVector End;

	FVector PlayerEyesLoc;
	FRotator PlayerEyesRot;

	GetActorEyesViewPoint(PlayerEyesLoc, PlayerEyesRot);

	float LineTraceDistance = m_LineTraceLength * m_PreviewScale;

	Start = PlayerEyesLoc;
	End = PlayerEyesLoc + (PlayerEyesRot.Vector() * LineTraceDistance);

	FCollisionQueryParams TraceParams(FName(TEXT("LookAtTrace")), true, this);

	FHitResult InteractHit = FHitResult(ForceInit);

	// get hit object type
	FCollisionObjectQueryParams ObjectTypeParams;
	ObjectTypeParams.AddObjectTypesToQuery(ECC_WorldStatic);
	ObjectTypeParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	ObjectTypeParams.AddObjectTypesToQuery(ECC_GameTraceChannel2);
	ObjectTypeParams.AddObjectTypesToQuery(ECC_GameTraceChannel3);
	ObjectTypeParams.AddObjectTypesToQuery(ECC_GameTraceChannel4);

	bool hasObject = false;
	bool bIsHit = GetWorld()->LineTraceSingleByObjectType(InteractHit, Start, End, ObjectTypeParams, TraceParams);
	if(bIsHit)
		LookingAtLoc = InteractHit.ImpactPoint;
	if (bIsHit && InteractHit.GetActor() != this) {
		DrawDebugLine(GetWorld(), LookingAtLoc, LookingAtLoc + FVector(0,0,10), FColor::Red, false, -1, 0, 5);
		if (LookingAt != InteractHit.GetActor()) {
			LookingAt = InteractHit.GetActor();
			hasObject = true;
		}
		else {
			hasObject = true;
		}

	}

	if (!hasObject) {
		LookingAt = nullptr;
	}
}

AAPTG_PlaceableTileGrid* AModelVillageCharacter::GetLookingAtGrid()
{
	if (LookingAt->GetClass()->IsChildOf(AAPTG_PlaceableTileGrid::StaticClass())) {
		AAPTG_PlaceableTileGrid* tileGrid = Cast<AAPTG_PlaceableTileGrid>(LookingAt);
		return tileGrid;
	}
	return nullptr;
}

bool AModelVillageCharacter::CanPlace()
{
	if (!LookingAt)
		return false;
	AAPTG_PlaceableTileGrid* tileGrid = GetLookingAtGrid();
	if (tileGrid == nullptr)
		return false;
	return tileGrid->CanPlaceTile(LookingAtLoc);
}

void AModelVillageCharacter::PlaceTile()
{
	if (!CanPlace())
		return;
	AAPTG_PlaceableTileGrid* tileGrid = GetLookingAtGrid();
	tileGrid->AddTileToLooking(LookingAtLoc, m_PreviewRotation, TileType);
}

FVector AModelVillageCharacter::GetLookingAtGridLocation()
{
	if (!CanPlace())
		return FVector::ZeroVector;
	AAPTG_PlaceableTileGrid* tileGrid = GetLookingAtGrid();
	return tileGrid->GetTileLoc(LookingAtLoc);
}

void AModelVillageCharacter::DisplayPreview()
{
	if (!CanPlace())
		PlaceablePreviewMesh->SetVisibility(false);

	PlaceablePreviewMesh->SetRelativeScale3D(FVector(m_PreviewScale, m_PreviewScale, m_PreviewScale));
	PlaceablePreviewMesh->SetWorldLocation(GetLookingAtGridLocation());
	PlaceablePreviewMesh->SetVisibility(true);
}
