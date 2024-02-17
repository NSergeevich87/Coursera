// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateTalkerActor.h"
#include "Engine/EngineTypes.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DelegateListenerActor.generated.h"

UCLASS()
class BEARSGAME_API ADelegateListenerActor : public AActor
{
	GENERATED_BODY()
	
private:
	ADelegateTalkerActor* Talker;

public:
	UFUNCTION()
	void ReceiveMessage(FString Message);

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Sets default values for this actor's properties
	ADelegateListenerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
