// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TeddyBear.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner_TeddyBear.generated.h"

/**
 *
*/
UCLASS()
class JUMPTHATACTOR_API ASpawner_TeddyBear : public AActor
{
	GENERATED_BODY()

private:
	float MinY{ -200 };
	float MaxY{ 200 };
	float MinZ{ 200 };
	float MaxZ{ 400 };

	void StartTimer();

public:
	UPROPERTY(EditAnywhere, meta = (MetaClass = "TeddyBear"), Category = TeddyBearBlueprints)
	TSubclassOf<ATeddyBear> Yellow_TB;
	UPROPERTY(EditAnywhere, meta = (MetaClass = "TeddyBear"), Category = TeddyBearBlueprints)
	TSubclassOf<ATeddyBear> Purple_TB;
	UPROPERTY(EditAnywhere, meta = (MetaClass = "TeddyBear"), Category = TeddyBearBlueprints)
	TSubclassOf<ATeddyBear> Green_TB;

	UFUNCTION()
	void StartSpawn();

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ASpawner_TeddyBear();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation 
	*/
	virtual void Tick(float DeltaTime) override;

};
