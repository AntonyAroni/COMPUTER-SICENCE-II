// Copyright Epic Games, Inc. All Rights Reserved.


#include "GAME_CCIIGameModeBase.h"

#include "Player_1_Character.h"

AGAME_CCIIGameModeBase::AGAME_CCIIGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APlayer_1_Character> MyPlayer_1_CharacterBP(TEXT("/Game/Blueprints/MyPlayer_1_CharacterBP"));
	if (MyPlayer_1_CharacterBP.Class != NULL)
	{
		DefaultPawnClass = MyPlayer_1_CharacterBP.Class;
	}
}

