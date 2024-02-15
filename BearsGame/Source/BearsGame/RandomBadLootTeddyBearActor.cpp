// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomBadLootTeddyBearActor.h"

void ARandomBadLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	SetTeddyBearPoints(100);
}

void ARandomBadLootTeddyBearActor::ProcessProjectileCollision()
{
	float RandNum = FMath::RandRange(0.f, 1.f);
	if (RandNum < 0.5f)
	{
		DropLoot(GetActorLocation(), UGoodLoot);
	}
	else
	{
		DropLoot(GetActorLocation(), UBadLoot);
	}

	AddTeddyBearPointsToHud();
	Destroy();
}
