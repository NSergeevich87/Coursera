// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LootTeddyBearActor.h"
#include "RandomBadLootTeddyBearActor.generated.h"

/**
 * 
 */
UCLASS()
class BEARSGAME_API ARandomBadLootTeddyBearActor : public ALootTeddyBearActor
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	virtual void ProcessProjectileCollision() override;
};
