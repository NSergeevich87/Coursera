// Fill out your copyright notice in the Description page of Project Settings.


#include "BadLootActor.h"

void ABadLootActor::BeginPlay()
{
	Super::BeginPlay();

	SetLootDestroyPoints(10);
}

void ABadLootActor::ProcessTeddyBearCollision(AActor* OtherActor)
{
	AddPointsToHud(-50);
	OtherActor->Destroy();
}
