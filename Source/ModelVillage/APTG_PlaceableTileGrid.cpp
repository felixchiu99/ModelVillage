// Fill out your copyright notice in the Description page of Project Settings.


#include "APTG_PlaceableTileGrid.h"
#include "APT_PlaceableTile.h"

// Sets default values
AAPTG_PlaceableTileGrid::AAPTG_PlaceableTileGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TableSurface = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TableSurface"));
	TableSurface->SetWorldScale3D(FVector(m_TileX, m_TileY, 0.7f) * m_TileScale);

	InitGrid();
}

// Called when the game starts or when spawned
void AAPTG_PlaceableTileGrid::BeginPlay()
{
	Super::BeginPlay();
	if(isInit)
		CreateTestGrid();
}

void AAPTG_PlaceableTileGrid::CreateTestGrid()
{
	AddTile(2, 2, 0, InitIsland);
	AddTile(2, 3, 0, InitIsland);
	AddTile(3, 2, 0, InitIsland);
	AddTile(3, 3, 0, InitIsland);
}

void AAPTG_PlaceableTileGrid::InitGrid()
{
	Grid.SetNum(m_TileX * m_TileY);

}

int AAPTG_PlaceableTileGrid::GetTileIndex(int x, int y)
{
	return y + x * m_TileY;
}

void AAPTG_PlaceableTileGrid::AddTile(int x, int y, int8 rotation,  TSubclassOf<AAPT_PlaceableTile>	tileType)
{
	if (x < 0 || x >= m_TileX)
		return;
	if (y < 0 || y >= m_TileY)
		return;
	FVector spawnLoc = GetCoordinatesLocation(x, y);
	FRotator spawnRot = FRotator(0, rotation * 90, 0);
	AAPT_PlaceableTile* tile = GetWorld()->SpawnActor<AAPT_PlaceableTile>(tileType, spawnLoc, spawnRot);
	tile->SetActorScale3D(tile->GetActorScale3D() * m_TileScale);
	Grid[GetTileIndex(x,y)] = tile;
}

void AAPTG_PlaceableTileGrid::RemoveTile(int x, int y)
{
	if (!HasTile(x, y))
		return;
	Grid[GetTileIndex(x, y)]->Destroy();
	Grid[GetTileIndex(x, y)] = nullptr;
}

bool AAPTG_PlaceableTileGrid::HasTile(int x, int y)
{
	if (Grid[GetTileIndex(x, y)] == nullptr)
		return false;
	//DrawDebugLine(GetWorld(), Grid[GetTileIndex(x, y)]->GetActorLocation(), Grid[GetTileIndex(x, y)]->GetActorLocation() + FVector(0, 0, 100), FColor::Yellow, false, -1, 0, 5);
	return true;
}

// Called every frame
void AAPTG_PlaceableTileGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AAPTG_PlaceableTileGrid::CanPlaceTile(FVector lookAtLocation)
{
	FVector localCoord =  GetRelativeTileCoordinates(lookAtLocation);
	if(localCoord.X < 0 && localCoord.X >= m_TileX)
		return false;
	if (localCoord.Y < 0 && localCoord.Y >= m_TileY)
		return false;

	if (HasTile(localCoord.X, localCoord.Y))
		return false;

	return true;
}

FVector AAPTG_PlaceableTileGrid::GetTileLoc(FVector lookAtLocation)
{
	FVector coord = GetRelativeTileCoordinates(lookAtLocation);

	return GetCoordinatesLocation(coord.X, coord.Y);
}

void AAPTG_PlaceableTileGrid::AddTileToLooking(FVector lookAtLocation, int8 rotation, TSubclassOf<AAPT_PlaceableTile> tileType)
{
	FVector coord = GetRelativeTileCoordinates(lookAtLocation);
	AddTile(coord.X, coord.Y, rotation, tileType);
}

FVector AAPTG_PlaceableTileGrid::GetCoordinatesLocation(int x, int y)
{
	FVector worldLoc = GetActorLocation()
		+ FVector(x * m_TileSpacing, y * m_TileSpacing, 0) * m_TileScale		//tileGridCoord offset
		+ FVector(m_TileSpacing / 2, m_TileSpacing / 2, 0) * m_TileScale		//tile offset
		+ FVector(0, 0, TableSurface->GetComponentLocation().Z + TableSurface->GetComponentScale().Z * 0.5f + m_TileZOffset * m_TileScale)	//table surface offset
		+ FVector(-m_TileX * m_TileSpacing * 0.5f, -m_TileY * m_TileSpacing * 0.5f, 0) * m_TileScale									//table surface placement offset
		;
	return worldLoc;
}

FVector AAPTG_PlaceableTileGrid::GetRelativeTileCoordinates(FVector lookAtLocation)
{
	FVector RelativeLoc = lookAtLocation - GetWorldSpaceLowerBound();
	int X = FMath::Clamp(RelativeLoc.X / (m_TileSpacing * m_TileScale), 0.0f, m_TileX-1.f);
	int Y = FMath::Clamp(RelativeLoc.Y / (m_TileSpacing * m_TileScale), 0.0f, m_TileY-1.f);
	return FVector(X, Y, 0);
}

FVector AAPTG_PlaceableTileGrid::GetWorldSpaceUpperBound()
{
	FVector bound = GetActorLocation() 
		+ FVector(m_TileX * m_TileSpacing * 0.5f, m_TileY * m_TileSpacing * 0.5f, 0) * m_TileScale;
	return bound;
}

FVector AAPTG_PlaceableTileGrid::GetWorldSpaceLowerBound()
{
	FVector bound = GetActorLocation()
		- FVector(m_TileX * m_TileSpacing * 0.5f, m_TileY * m_TileSpacing * 0.5f, 0) * m_TileScale;
	return bound;
}

