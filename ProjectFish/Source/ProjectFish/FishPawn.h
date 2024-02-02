// Copyright NSergeevich. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FishPawn.generated.h"

UCLASS()
class PROJECTFISH_API AFishPawn : public APawn
{
	GENERATED_BODY()

private:
	// Move variables
	const float MoveAmountPerSecond{ 100 };
	float HalfCollisionHeight{};
	float HalfCollisionWidth{};

	// Shooting support
	const float ForceMagnitude{ 300 };
	bool WasShot{ false };

	// damage support
	int Damage{ 100 };

	// MeshComponent
	UStaticMeshComponent* StaticMeshComponent{};

public:
	// Sets default values for this pawn's properties
	AFishPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/**
	 * Gets the damage the fish inflicts
	 * @return damage
	*/
	int GetDamage() const;

	/**
	 * Sets the damage the fish inflicts
	 * @param FishDamage 
	*/
	void SetDamage(int FishDamage);

	void MoveHorizontally(float MoveScale);

	void Shoot();

	UFUNCTION()
	void OnOverlapBegin(
		class UPrimitiveComponent* OverlappedComponent,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};
