// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorController.h"

#include "CasadorPawn.h"

void ACasadorController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal", this, &ACasadorController::HorizontalMove);
	InputComponent->BindAction("Shoot", EInputEvent::IE_Released, this, &ACasadorController::JumpImpulse);
}

void ACasadorController::HorizontalMove(float input)
{
	if (input != 0)
	{
		ACasadorPawn* Casador = (ACasadorPawn*)GetPawn();
		if (Casador != nullptr)
		{
			Casador->HorizontalMove(input);
		}
	}
}

void ACasadorController::JumpImpulse()
{
	ACasadorPawn* Casador = (ACasadorPawn*)GetPawn();
	if (Casador != nullptr)
	{
		Casador->JumpImpulse();
	}
}
