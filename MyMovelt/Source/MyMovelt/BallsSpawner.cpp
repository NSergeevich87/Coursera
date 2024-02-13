// Fill out your copyright notice in the Description page of Project Settings.


#include "BallsSpawner.h"

void ABallsSpawner::StartTimer()
{
	float InRate = FMath::RandRange(SpawnTimeMin, SpawnTimeMax);
	GetWorldTimerManager().SetTimer(Timer, this, &ABallsSpawner::StartSpawn, InRate);
}

// Sets default values
ABallsSpawner::ABallsSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABallsSpawner::BeginPlay()
{
	Super::BeginPlay();

	StartTimer();
}

// Called every frame
void ABallsSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallsSpawner::StartSpawn()
{
	FVector Location{ 100.f, 0.f, 0.f };
	int RandnIndex = FMath::RandRange(0, 2);
	
	TSubclassOf<ABallActor> TempActor{};

	switch (RandnIndex)
	{
	case 0:
		TempActor = WhiteBall;
		break;
	case 1:
		TempActor = GreenBall;
		break;
	case 2:
		TempActor = RedBall;
		break;
	}

	GetWorld()->SpawnActor<ABallActor>(TempActor, Location, FRotator::ZeroRotator);
	StartTimer();
}

