// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnLounchers.h"
#include "Kismet/GameplayStatics.h"

void ASpawnLounchers::StartTimer()
{
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ASpawnLounchers::StartSpawn, SpawnTimer);
}

void ASpawnLounchers::StartSpawn()
{
	TSubclassOf<ALauncherActor> TempActor{};
	int RandNum = FMath::RandRange(0, 2);
	switch (RandNum)
	{
	case 0:
		TempActor = ChainsawLauncher;
		break;
	case 1:
		TempActor = PirateLauncher;
		break;
	case 2:
		TempActor = ZombieLauncher;
		break;
	}

	FVector Location{ 100, -250, 0 };
	float RandomZLocation = FMath::RandRange(-150, 150);
	Location.Z = RandomZLocation;

	GetWorld()->SpawnActor<ALauncherActor>(TempActor, Location, FRotator::ZeroRotator);

	StartTimer();
}

void ASpawnLounchers::DestroyLounchers()
{
	TArray<AActor*> Lounchers;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Louncher", Lounchers);
	if (Lounchers.Num() > 0)
	{
		for (auto i = 0; i < Lounchers.Num(); i++)
		{
			Lounchers[i]->Destroy();
		}
	}
}

// Sets default values
ASpawnLounchers::ASpawnLounchers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnLounchers::BeginPlay()
{
	Super::BeginPlay();
	
	DestroyLounchers();
	StartTimer();
}

// Called every frame
void ASpawnLounchers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

