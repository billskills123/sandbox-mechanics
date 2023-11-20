// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealWorkshopGameMode.h"
#include "UnrealWorkshopCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealWorkshopGameMode::AUnrealWorkshopGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
