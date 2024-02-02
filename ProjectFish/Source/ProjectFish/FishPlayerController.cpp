// Fill out your copyright notice in the Description page of Project Settings.


#include "FishPlayerController.h"

#include "FishPawn.h"

void AFishPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis(TEXT("Horizontal"), this, &AFishPlayerController::MoveHorizontally);
	InputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AFishPlayerController::ShootFish);
}

void AFishPlayerController::MoveHorizontally(float input)
{
	if (input != 0)
	{
		AFishPawn* FishPawn = (AFishPawn*)GetPawn();
		if (FishPawn != nullptr)
		{
			FishPawn->MoveHorizontally(input);
		}
	}
}

void AFishPlayerController::ShootFish()
{
	AFishPawn* FishPawn = (AFishPawn*)GetPawn();
	if (FishPawn != nullptr)
	{
		FishPawn->Shoot();
	}
}
