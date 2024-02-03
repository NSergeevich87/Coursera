// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorGameModeBase.h"

ACasadorGameModeBase::ACasadorGameModeBase()
{
	ConstructorHelpers::FObjectFinder<UClass>CasadorPawn(TEXT("Class'/Game/TheRunaway/Blueprints/BP_CasadorPawn.BP_CasadorPawn_C'"));
	if (CasadorPawn.Object != nullptr)
	{
		DefaultPawnClass = CasadorPawn.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass>CasadorController(TEXT("Class'/Game/TheRunaway/Blueprints/BP_CasadorController.BP_CasadorController_C'"));
	if (CasadorController.Object != nullptr)
	{
		PlayerControllerClass = CasadorController.Object;
	}
}