// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TedPawn.generated.h"

UCLASS()
class TEDPICKUP_API ATedPawn : public APawn
{
	GENERATED_BODY()

private:
	UStaticMeshComponent* StaticMeshComponent;

public:
	// Sets default values for this pawn's properties
	ATedPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GoToPickup(APickup* Pickup);

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent,
			class AActor* OtherActor,
			class UPrimitiveComponent* OtherComponent,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

private:
	const float ForceMagnitude{ 200.f };

	APickup* TargetPickup = nullptr;

	FVector GetForceVector(FVector PawnLocation, FVector PickupLocation);
};
