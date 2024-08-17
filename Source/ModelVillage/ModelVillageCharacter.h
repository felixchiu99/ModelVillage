// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Engine/DataTable.h"
#include "ModelVillageCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

class AAPT_PlaceableTile;
class AAPTG_PlaceableTileGrid;
struct FS_TileType;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AModelVillageCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/* Placeable preview*/
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* PlaceablePreviewMesh;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;

	/** Rotate Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RotateAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** TileType DataTable */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TileType, meta = (AllowPrivateAccess = "true"))
	UDataTable* TileTypeTable;

	/* Current TileType*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tiles", meta = (OnlyPlaceable, AllowPrivateAccess = "true"))
	TSubclassOf<AAPT_PlaceableTile>	TileType;
	
public:
	AModelVillageCharacter();

protected:
	virtual void BeginPlay();

		// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

	/** Setter to set the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	void SetHasRifle(bool bNewHasRifle);

	/** Getter for the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	bool GetHasRifle();

protected:
	void InitTileType();

	void SetTileType(FS_TileType* row);

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for Interact input */
	void Interact(const FInputActionValue& Value);

	/** Called for Rotate input */
	void Rotate(const FInputActionValue& Value);

	/*Find Keybind for interaction keys*/
	FString GetMappedKeys(UInputAction* QueryAction);

	/* find what the player is looking at*/
	void GetLookedAt();

	/* find the Grid the player is looking at*/
	AAPTG_PlaceableTileGrid* GetLookingAtGrid();

	/* see if grid can be placed*/
	bool CanPlace();

	/* Try to place a tile on grid*/
	void PlaceTile();

	/* Get place location at grid*/
	FVector GetLookingAtGridLocation();

	/* display Preview*/
	void DisplayPreview();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

protected:
	AActor* LookingAt;
	FVector LookingAtLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharactorSettings")
	float m_LineTraceLength = 600.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharactorSettings")
	int m_PreviewScale = 1;

private:
	int8 m_PreviewRotation = 0;
	int8 m_TileTypeSelection = 1;

	TArray<FName> TileTypeMap;
};

