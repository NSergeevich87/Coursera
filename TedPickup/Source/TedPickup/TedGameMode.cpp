// Fill out your copyright notice in the Description page of Project Settings.


#include "TedGameMode.h"

ATedGameMode::ATedGameMode()
{
	ConstructorHelpers::FObjectFinder<UClass>PawnClass(TEXT("Class'/Game/TedPickup/Blueprints/BP_TedPawn.BP_TedPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass>ControllerClass(TEXT("Class'/Game/TedPickup/Blueprints/BP_TedController.BP_TedController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}