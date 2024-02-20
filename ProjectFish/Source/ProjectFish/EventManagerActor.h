// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TeddyBear.h"
#include "GameHUD.h"
#include "Delegates/DelegateInstanceInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventManagerActor.generated.h"

UCLASS()
class PROJECTFISH_API AEventManagerActor : public AActor
{
	GENERATED_BODY()
	
private:
	TArray<ATeddyBear*> KillAddedEventInvokers;
	TMap<AGameHUD*, TMap<ATeddyBear*, FDelegateHandle>> KillAddedEventListeners;

public:	
	// Sets default values for this actor's properties
	AEventManagerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddInvoker(ATeddyBear* Invoker);
	void RemoveInvoker(ATeddyBear* Invoker);
	void AddListener(AGameHUD* Listener);
	void RemoveListener(AGameHUD* Listener);
};
