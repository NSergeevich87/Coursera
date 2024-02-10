// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConfigurationDataActor.h"
#include "TeddyBear.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearsSpawner.generated.h"

UCLASS()
class PROJECTFISH_API ATeddyBearsSpawner : public AActor
{
	GENERATED_BODY()

private:
	//const float TimerDelayMin{ 2 };
	//const float TimerDelayMax{ 4 };
	const float LeftSpawnBorde{ -200 };
	const float RightSpawnBorde{ 200 };
	const float SpawnZ{ 150 };

	void StartTimer();

	AConfigurationDataActor* ConfigurationData;

public:	
	// Sets default values for this actor's properties
	ATeddyBearsSpawner();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnObject)
	class TSubclassOf<ATeddyBear> TeddyBear;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void StartSpawn();
};
