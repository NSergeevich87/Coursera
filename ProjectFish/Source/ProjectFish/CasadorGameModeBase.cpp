// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorGameModeBase.h"

ACasadorGameModeBase::ACasadorGameModeBase()
{
	ConstructorHelpers::FObjectFinder<UClass>PawnClass(TEXT("Class'/Game/ProjectFish/Blueprints/BP_CasadorPawn.BP_CasadorPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass>CasadorController(TEXT("Class'/Game/ProjectFish/Blueprints/BP_CasadorController.BP_CasadorController_C'"));
	if (CasadorController.Object != nullptr)
	{
		PlayerControllerClass = CasadorController.Object;
	}
}
