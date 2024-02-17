// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DelegateTalkerActor.generated.h"

DECLARE_DELEGATE_OneParam(FMessageDelegate, FString);

UCLASS()
class BEARSGAME_API ADelegateTalkerActor : public AActor
{
	GENERATED_BODY()
	
private:
	int MessageNumber{ 1 };
	void StartTalkerTimer();
	void Talk();

public:
	FMessageDelegate MessageDelegate;

public:	
	// Sets default values for this actor's properties
	ADelegateTalkerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
