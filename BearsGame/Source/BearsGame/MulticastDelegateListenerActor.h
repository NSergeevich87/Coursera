// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MulticastDelegateActor.h"
#include "Engine/EngineTypes.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MulticastDelegateListenerActor.generated.h"

UCLASS()
class BEARSGAME_API AMulticastDelegateListenerActor : public AActor
{
	GENERATED_BODY()
	
private:
	AMulticastDelegateActor* Talker;
	FDelegateHandle DelegateHandle;

public:
	UFUNCTION()
	void ReseiveMessage(FString Message);

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Sets default values for this actor's properties
	AMulticastDelegateListenerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
