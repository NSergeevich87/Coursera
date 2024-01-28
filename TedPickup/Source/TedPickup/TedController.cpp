// Fill out your copyright notice in the Description page of Project Settings.


#include "TedController.h"
#include "TedPawn.h"

void ATedController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAction("PlacePickup", EInputEvent::IE_Released, this, &ATedController::PlacePickup);
	InputComponent->BindAction("CollectPickup", EInputEvent::IE_Released, this, &ATedController::CollectPickups);
}

void ATedController::PlacePickup()
{
	FVector WorldLocation{};
	FVector WorldDirection{};
	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	WorldLocation.X = 0;

	APickup* NewPickup = GetWorld()->SpawnActor<APickup>(UPickup, WorldLocation, FRotator::ZeroRotator);

	Pickups.Add(NewPickup);
}

void ATedController::CollectPickups()
{
	if (!Collecting)
	{
		GoToNextPickup();
	}
}

void ATedController::DestroyPickup(APickup* Pickup)
{
	Pickups.Remove(Pickup);
	Pickup->Destroy();
	GoToNextPickup();
}

void ATedController::GoToNextPickup()
{
	if (Pickups.Num() > 0)
	{
		APickup* Target = Pickups[0];
		Pickups.RemoveAt(0);

		ATedPawn* Ted = (ATedPawn*)GetPawn();
		if (Ted != nullptr)
		{
			Ted->GoToPickup(Target);
		}
	}
}
