// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PointsAddedInvokerInterface.h"
#include "GameHUD.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventManagerActor.generated.h"

UCLASS()
class BEARSGAME_API AEventManagerActor : public AActor
{
	GENERATED_BODY()

private:
	TArray<IPointsAddedInvokerInterface*> PointsAddedEventInvokers;
	TMap<AGameHUD*, TMap<IPointsAddedInvokerInterface*, FDelegateHandle>> PointsAddedEventListeners;
	
public:
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
	*/
	virtual void Tick(float DeltaTime) override;

	/**
	 * Adds the given invoker as an invoker of the message event
	 * @param Invoker invoker
	*/
	void AddInvoker(IPointsAddedInvokerInterface* Invoker);

	/**
	 * Removes the given invoker as an invoker of the message event
	 * @param Invoker invoker
	*/
	void RemoveInvoker(IPointsAddedInvokerInterface* Invoker);

	/**
	 * Adds the given listener as a listener for the message event
	 * @param Listener listener
	*/
	void AddListener(AGameHUD* Listener);

	/**
	 * Removes the given listener as a listener for the message event
	 * @param Listener listener
	*/
	void RemoveListener(AGameHUD* Listener);

public:	
	// Sets default values for this actor's properties
	AEventManagerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
