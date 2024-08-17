// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/DataTable.h"

#include "S_TileType.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FS_TileType : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

public:
    // PreviewMesh. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    class UStaticMesh* PreviewMesh;

    // APT_PlaceableTile. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<class AAPT_PlaceableTile> TileType;
};
