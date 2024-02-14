// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootActor.generated.h"

UCLASS(Abstract)
class BEARSGAME_API ALootActor : public AActor
{
	GENERATED_BODY()
	
private:
	int LootDestroyPoints{ 0 };

protected:
	virtual void ProcessTeddyBearCollision(class AActor* OtherActor) 
		PURE_VIRTUAL(ALootActor::ProcessTeddyBearCollision, );
	void SetLootDestroyPoints(int Points);
	void AddLootDestroyPointsToHud();
	void AddPointsToHud(int Points);

public:
	UFUNCTION()
	void OnOverlapBegin(
		class UPrimitiveComponent* OverlappedComponent,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

public:	
	// Sets default values for this actor's properties
	ALootActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
