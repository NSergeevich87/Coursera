// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearActor.generated.h"

UCLASS(Abstract)
class BEARSGAME_API ATeddyBearActor : public AActor
{
	GENERATED_BODY()
	
private:
	float HalfCollisionWidth{};
	const float MoveAmountPerSecond{ 60 };
	int TeddyBearPoints{ 0 };

protected:
	virtual void ProcessProjectileCollision() PURE_VIRTUAL(ATeddyBearActor::ProcessProjectileCollision, );
	float GetHalfCollisionWidth();
	void SetTeddyBearPoints(int Points);
	void AddTeddyBearPointsToHud();

public:
	UFUNCTION()
	void OnOverlapBegin(
		class UPrimitiveComponent* OverlappedComponent,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

public:	
	// Sets default values for this actor's properties
	ATeddyBearActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
