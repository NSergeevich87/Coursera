// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TedController.generated.h"

/**
 * 
 */
UCLASS()
class TEDPICKUP_API ATedController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta = (MetaClass = "Pickup"), Category = PickupBlueprints)
	TSubclassOf<APickup> UPickup;

	virtual void SetupInputComponent() override;
	
	void PlacePickup();

	void CollectPickups();

	void DestroyPickup(APickup* Pickup);

private:
	UPROPERTY()
	TArray<APickup*> Pickups{};

	bool Collecting{ false };

	void GoToNextPickup();
};
