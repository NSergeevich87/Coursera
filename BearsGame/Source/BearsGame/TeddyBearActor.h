// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateDeclarations.h"
#include "PointsAddedInvokerInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearActor.generated.h"

UCLASS(Abstract)
class BEARSGAME_API ATeddyBearActor : public AActor, public IPointsAddedInvokerInterface
{
	GENERATED_BODY()
	
private:
	float HalfCollisionWidth{};
	const float MoveAmountPerSecond{ 60 };
	int TeddyBearPoints{ 0 };

	FPointsAddedEvent PointsAddedEvent;

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

	/**
	 * Called when actor is being removed from level
	 * @param EndPlayReason why the actor is being removed
	*/
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/**
	 * Gets the points added event for this invoker
	 * @return points added event
	*/
	virtual FPointsAddedEvent& GetPointsAddedEvent() override;

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
