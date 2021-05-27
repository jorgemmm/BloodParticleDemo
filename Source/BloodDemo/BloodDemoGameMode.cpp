// Copyright Epic Games, Inc. All Rights Reserved.

#include "BloodDemoGameMode.h"
#include "BloodDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABloodDemoGameMode::ABloodDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
