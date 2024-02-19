// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateDeclarations.h"
#include "PointsAddedInvokerInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootActor.generated.h"

UCLASS(Abstract)
class BEARSGAME_API ALootActor : public AActor, public IPointsAddedInvokerInterface
{
	GENERATED_BODY()
	
private:
	int LootDestroyPoints{ 0 };

	//event support
	FPointsAddedEvent PointsAddedEvent;

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
	ALootActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
