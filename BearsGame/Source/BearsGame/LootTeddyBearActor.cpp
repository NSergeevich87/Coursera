// Fill out your copyright notice in the Description page of Project Settings.


#include "LootTeddyBearActor.h"

// Called when the game starts or when spawned
void ALootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALootTeddyBearActor::DropLoot(FVector ActorLocation, TSubclassOf<ALootActor> LootActor)
{
	FVector DropLocation{ ActorLocation };
	DropLocation.Y += GetHalfCollisionWidth() + LootDropOffset;
	GetWorld()->SpawnActor<ALootActor>(LootActor, DropLocation, FRotator::ZeroRotator);
}