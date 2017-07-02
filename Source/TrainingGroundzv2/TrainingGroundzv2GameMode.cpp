// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TrainingGroundzv2.h"
#include "TrainingGroundzv2GameMode.h"
#include "TrainingGroundzv2HUD.h"
#include "TrainingGroundzv2Character.h"

ATrainingGroundzv2GameMode::ATrainingGroundzv2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATrainingGroundzv2HUD::StaticClass();
}
