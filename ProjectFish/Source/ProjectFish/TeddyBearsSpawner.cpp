// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBearsSpawner.h"
#include "Kismet/GameplayStatics.h"

void ATeddyBearsSpawner::StartTimer()
{
	float RateSpawn = FMath::RandRange(ConfigurationData->GetMinSpawnDelaySeconds(), ConfigurationData->GetMaxSpawnDelaySeconds());

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ATeddyBearsSpawner::StartSpawn, RateSpawn);
}

// Sets default values
ATeddyBearsSpawner::ATeddyBearsSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATeddyBearsSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> ConfigurationDataActors{};
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationDataActor", ConfigurationDataActors);
	if (ConfigurationDataActors.Num() > 0)
	{
		ConfigurationData = (AConfigurationDataActor*)ConfigurationDataActors[0];
	}

	StartTimer();
}

// Called every frame
void ATeddyBearsSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeddyBearsSpawner::StartSpawn()
{
	FVector SpawnPlace{ 0 };
	SpawnPlace.Z = SpawnZ;
	SpawnPlace.Y = FMath::RandRange(LeftSpawnBorde, RightSpawnBorde);

	GetWorld()->SpawnActor<ATeddyBear>(TeddyBear, SpawnPlace, FRotator::ZeroRotator);
	
	StartTimer();
}