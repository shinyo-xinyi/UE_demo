// Copyright Epic Games, Inc. All Rights Reserved.

#include "class01GameMode.h"
#include "class01Character.h"
#include "UObject/ConstructorHelpers.h"

Aclass01GameMode::Aclass01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
