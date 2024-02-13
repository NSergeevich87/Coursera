// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BallActor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallsSpawner.generated.h"

UCLASS()
class MYMOVELT_API ABallsSpawner : public AActor
{
	GENERATED_BODY()
	
private:
	float SpawnTimeMin{ 0.5f };
	float SpawnTimeMax{ 2.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Balls", meta = (AllowPrivateAccess = "true"))
	class TSubclassOf<ABallActor> WhiteBall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Balls", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABallActor> GreenBall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Balls", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABallActor> RedBall;

	FTimerHandle Timer;

	void StartTimer();

public:	
	// Sets default values for this actor's properties
	ABallsSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void StartSpawn();
};
