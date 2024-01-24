// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterGameMode.h"

ACharacterGameMode::ACharacterGameMode()
{
	// character references: /Script/Engine.Blueprint'/Game/JumpThatActor/Blueprints/BP_CharacterPawn.BP_CharacterPawn'
	// controller references: /Script/Engine.Blueprint'/Game/JumpThatActor/Blueprints/BP_CharacterPlayerController.BP_CharacterPlayerController'
	// set pawn and player controller
	
	ConstructorHelpers::FObjectFinder<UClass>
		PawnClass(TEXT("Class'/Game/JumpThatActor/Blueprints/BP_CharacterPawn.BP_CharacterPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/JumpThatActor/Blueprints/BP_CharacterPlayerController.BP_CharacterPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}
