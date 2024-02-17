// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MulticastDelegateActor.generated.h"

//DECLARE_EVENT_OneParam(AMulticastDelegateActor, FMessageDelegate, FString);
DECLARE_MULTICAST_DELEGATE_OneParam(FMessageDelegate, FString);

UCLASS()
class BEARSGAME_API AMulticastDelegateActor : public AActor
{
	GENERATED_BODY()

private:
	int Number{ 1 };
	void StartTimer();
	void SendMessage();

public:
	FMessageDelegate MessageDelegate;

public:	
	// Sets default values for this actor's properties
	AMulticastDelegateActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
