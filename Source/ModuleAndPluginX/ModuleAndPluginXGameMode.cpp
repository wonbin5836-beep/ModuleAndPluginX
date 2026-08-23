// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModuleAndPluginXGameMode.h"
#include "ModuleAndPluginXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModuleAndPluginXGameMode::AModuleAndPluginXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
