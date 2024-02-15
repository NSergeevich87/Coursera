// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeddyBearActor.h"
#include "NoLootTeddyBearActor.generated.h"

/**
 * 
 */
UCLASS()
class BEARSGAME_API ANoLootTeddyBearActor : public ATeddyBearActor
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	virtual void ProcessProjectileCollision() override;
};
