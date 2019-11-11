// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PhysSimGameMode.h"
#include "PhysSimHUD.h"
#include "PhysSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhysSimGameMode::APhysSimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APhysSimHUD::StaticClass();
}
