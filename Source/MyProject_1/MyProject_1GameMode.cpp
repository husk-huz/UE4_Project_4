// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject_1GameMode.h"
#include "MyProject_1HUD.h"
#include "MyProject_1Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject_1GameMode::AMyProject_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyProject_1HUD::StaticClass();
}
