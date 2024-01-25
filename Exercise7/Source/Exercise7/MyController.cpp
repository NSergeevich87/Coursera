// Fill out your copyright notice in the Description page of Project Settings.


#include "MyController.h"
#include "MyPawn.h"

void AMyController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal", this, &AMyController::MoveHorizontally);
	InputComponent->BindAxis("Vertical", this, &AMyController::MoveVertically);
}

void AMyController::MoveHorizontally(float input)
{
	if (input != 0)
	{
		AMyPawn* MyPawn = (AMyPawn*)GetPawn();
		if (MyPawn != nullptr)
		{
			MyPawn->MoveHorizontally(input);
		}
	}
}

void AMyController::MoveVertically(float input)
{
	if (input != 0)
	{
		AMyPawn* MyPawn = (AMyPawn*)GetPawn();
		if (MyPawn != nullptr)
		{
			MyPawn->MoveVertically(input);
		}
	}
}
