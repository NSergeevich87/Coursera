// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MinerPawn.generated.h"

UCLASS()
class JUMPTHATACTOR_API AMinerPawn : public APawn
{
	GENERATED_BODY()

private:
	const float MoveAmountPerFrame{ 1 };
	const float HalfCollisionWidth{ 12 };
	const float HalfCollisionHeight{ 19 };

public:
	// Sets default values for this pawn's properties
	AMinerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/**
	 * Moves the miner horizontally
	 * @param moveScale scale factor for movement
	 */
	void MoveHorizontally(float moveScale);
	/**
	 * Moves the miner vertically
	 * @param moveScale scale factor for movement
	 */
	void MoveVertically(float moveScale);
};
