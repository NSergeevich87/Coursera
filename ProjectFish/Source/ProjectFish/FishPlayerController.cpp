// Fill out your copyright notice in the Description page of Project Settings.


#include "FishPlayerController.h"

#include "FishPawn.h"

void AFishPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis(TEXT("Horizontal"), this, &AFishPlayerController::MoveHorizontally);
	InputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AFishPlayerController::ShootFish);
	InputComponent->BindAction(TEXT("GamePause"), EInputEvent::IE_Pressed, this, &AFishPlayerController::PauseMenu);
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

void AFishPlayerController::PauseMenu()
{
	if (PauseMenuWidgetClass != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PauseMenuWidgetClass);
		if (CurrentWidget != nullptr)
		{
			// add pause menu and pause game
			CurrentWidget->AddToViewport();
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
			SetPause(true);
		}
	}
}