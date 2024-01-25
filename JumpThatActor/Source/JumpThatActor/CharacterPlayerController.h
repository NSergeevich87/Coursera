// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TeddyBear.h"
#include "MinerPawn.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class JUMPTHATACTOR_API ACharacterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	/**
	Called to bind functionality to input
	*/
	virtual void SetupInputComponent() override;

	/**
	Called every frame
	DeltaTime Game time elapsed during last frame
	*/
	virtual void PlayerTick(float DeltaTime) override;

	//void DestroyCharacterPawn();

	//void JumpMinerPawn();

	void SpawnTeddyBear();

	void DestroyTeddyBear();

	// input on Horizontal axis
	void MoveHorizontally(float input);
	// input on Vertical axis
	void MoveVertically(float input);
	void DestroyMiner();

	UPROPERTY(EditAnywhere, meta = (MetaClass = "TeddyBear"), Category = TeddyBearBlueprints)
	TSubclassOf<ATeddyBear> TeddyBear_Yellow;

	UPROPERTY(EditAnywhere, meta = (MetaClass = "TeddyBear"), Category = TeddyBearBlueprints)
	TSubclassOf<ATeddyBear> TeddyBear_Purple;

	UPROPERTY(EditAnywhere, meta = (MetaClass = "TeddyBear"), Category = TeddyBearBlueprints)
	TSubclassOf<ATeddyBear> TeddyBear_Green;
};
