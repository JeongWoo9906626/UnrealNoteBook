// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIControllerGameMode.h"
#include "AIControllerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAIControllerGameMode::AAIControllerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
