// Fill out your copyright notice in the Description page of Project Settings.

#include "Spawner_TeddyBear.h"

/**
 * Sets default values
*/
ASpawner_TeddyBear::ASpawner_TeddyBear()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ASpawner_TeddyBear::BeginPlay()
{
	Super::BeginPlay();
	
	StartTimer();
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ASpawner_TeddyBear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner_TeddyBear::StartSpawn()
{
	TSubclassOf<ATeddyBear> SpawnTB{};

	int RandNum = FMath::RandRange(0, 2);
	
	if (RandNum == 0)
	{
		SpawnTB = Green_TB;
	}
	else if (RandNum == 1)
	{
		SpawnTB = Yellow_TB;
	}
	else
	{
		SpawnTB = Purple_TB;
	}

	FVector LocationSpawn{ 0 };
	LocationSpawn.SetComponentForAxis(EAxis::Y, FMath::RandRange(MinY, MaxY));
	LocationSpawn.SetComponentForAxis(EAxis::Z, FMath::RandRange(MinZ, MaxZ));

	GetWorld()->SpawnActor<ATeddyBear>(SpawnTB, LocationSpawn, FRotator::ZeroRotator);

	StartTimer();
}

void ASpawner_TeddyBear::StartTimer()
{
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ASpawner_TeddyBear::StartSpawn, 0.1f);
}