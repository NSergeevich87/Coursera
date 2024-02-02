// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectFishGameModeBase.h"

AProjectFishGameModeBase::AProjectFishGameModeBase()
{
	ConstructorHelpers::FObjectFinder<UClass>PawnClass(TEXT("Class'/Game/ProjectFish/Blueprints/BP_FishPawn.BP_FishPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass>PawnController(TEXT("Class'/Game/ProjectFish/Blueprints/BP_FishPlayerController.BP_FishPlayerController_C'"));
	if (PawnController.Object != nullptr)
	{
		PlayerControllerClass = PawnController.Object;
	}
}