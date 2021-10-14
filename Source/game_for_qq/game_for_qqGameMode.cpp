// Copyright Epic Games, Inc. All Rights Reserved.

#include "game_for_qqGameMode.h"
#include "game_for_qqHUD.h"
#include "game_for_qqCharacter.h"
#include "UObject/ConstructorHelpers.h"

Agame_for_qqGameMode::Agame_for_qqGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Agame_for_qqHUD::StaticClass();
}
