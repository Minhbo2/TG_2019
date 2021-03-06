// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TG_2019GameMode.h"
#include "TG_2019HUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATG_2019GameMode::ATG_2019GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Character/Behaviors/Character_BP"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATG_2019HUD::StaticClass();
}
