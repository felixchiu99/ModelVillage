// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APTG_PlaceableTileGrid.generated.h"

class AAPT_PlaceableTile;

UCLASS()
class MODELVILLAGE_API AAPTG_PlaceableTileGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAPTG_PlaceableTileGrid();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tiles", meta = (OnlyPlaceable, AllowPrivateAccess = "true"))
	TSubclassOf<AAPT_PlaceableTile>	InitIsland;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* TableSurface;

	TArray<AAPT_PlaceableTile*> Grid;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void CreateTestGrid();
	void InitGrid();

	int GetTileIndex(int x, int y);

	void AddTile(int x, int y, int8 rotation, TSubclassOf<AAPT_PlaceableTile> tileType);
	void RemoveTile(int x, int y);
	bool HasTile(int x, int y);

	FVector GetCoordinatesLocation(int x, int y);
	FVector GetRelativeTileCoordinates(FVector lookAtLocation);
	FVector GetWorldSpaceUpperBound();
	FVector GetWorldSpaceLowerBound();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool CanPlaceTile(FVector lookAtLocation);
	FVector GetTileLoc(FVector lookAtLocation);

	void AddTileToLooking(FVector lookAtLocation, int8 rotation, TSubclassOf<AAPT_PlaceableTile> tileType);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileSetting")
	int m_TileSpacing = 1*100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileSetting")
	int m_TileX = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileSetting")
	int m_TileY = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileSetting")
	int m_TileScale = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileSetting")
	int m_TileZOffset = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileSetting")
	bool isInit = false;
};
