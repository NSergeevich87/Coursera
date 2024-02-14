// Fill out your copyright notice in the Description page of Project Settings.


#include "GoodLootActor.h"

void AGoodLootActor::BeginPlay()
{
	Super::BeginPlay();

	SetLootDestroyPoints(50);
}

void AGoodLootActor::ProcessTeddyBearCollision(AActor* OtherActor)
{
	AddLootDestroyPointsToHud();
	Destroy();
}
