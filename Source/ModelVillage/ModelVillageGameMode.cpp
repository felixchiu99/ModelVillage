// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModelVillageGameMode.h"
#include "ModelVillageCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModelVillageGameMode::AModelVillageGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
