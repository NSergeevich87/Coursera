// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorController.h"

#include "CasadorPawn.h"

void ACasadorController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal", this, &ACasadorController::HorizontallyInput);
	InputComponent->BindAxis("Vertical", this, &ACasadorController::VerticallyInput);
}

void ACasadorController::HorizontallyInput(float input)
{
	if (input != 0)
	{
		ACasadorPawn* Casador = (ACasadorPawn*)GetPawn();
		if (Casador != nullptr)
		{
			//get horizontal input function
			Casador->MoveHorizontally(input);
		}
	}
}

void ACasadorController::VerticallyInput(float input)
{
	if (input != 0)
	{
		ACasadorPawn* Casador = (ACasadorPawn*)GetPawn();
		if (Casador != nullptr)
		{
			//get vertical input function
			Casador->MoveVertically(input);
		}
	}
}
