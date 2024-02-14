// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LootActor.h"
#include "BadLootActor.generated.h"

/**
 * 
 */
UCLASS()
class BEARSGAME_API ABadLootActor : public ALootActor
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void ProcessTeddyBearCollision(class AActor* OtherActor) override;
};
