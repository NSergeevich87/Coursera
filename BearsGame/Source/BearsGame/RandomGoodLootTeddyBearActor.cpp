// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomGoodLootTeddyBearActor.h"

void ARandomGoodLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	SetTeddyBearPoints(50);
}

void ARandomGoodLootTeddyBearActor::ProcessProjectileCollision()
{
	float RandNum = FMath::RandRange(0.f, 1.f);
	if (RandNum < 0.5f)
	{
		DropLoot(GetActorLocation(), UGoodLoot);
	}

	AddTeddyBearPointsToHud();
	Destroy();
}
