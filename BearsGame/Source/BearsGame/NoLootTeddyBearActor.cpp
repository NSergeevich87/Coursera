// Fill out your copyright notice in the Description page of Project Settings.


#include "NoLootTeddyBearActor.h"

void ANoLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	SetTeddyBearPoints(20);
}

void ANoLootTeddyBearActor::ProcessProjectileCollision()
{
	AddTeddyBearPointsToHud();
	Destroy();
}
