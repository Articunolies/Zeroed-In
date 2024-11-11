// Copyright Epic Games, Inc. All Rights Reserved.

#include "Zeroed_InGameMode.h"
#include "Zeroed_InCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroed_InGameMode::AZeroed_InGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
