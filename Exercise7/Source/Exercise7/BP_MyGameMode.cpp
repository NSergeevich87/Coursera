// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_MyGameMode.h"

ABP_MyGameMode::ABP_MyGameMode()
{
	ConstructorHelpers::FObjectFinder<UClass> PawnClass(TEXT("Class'/Game/Exercise7/Blueprints/BP_MyPawn.BP_MyPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass> ControllerClass(TEXT("Class'/Game/Exercise7/Blueprints/BP_MyController.BP_MyController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}
