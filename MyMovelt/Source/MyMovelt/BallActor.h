// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallActor.generated.h"

UCLASS()
class MYMOVELT_API ABallActor : public AActor
{
	GENERATED_BODY()
	
private:
	FVector ImpulceForce{ 0.f, -200.f, 0.f };

public:	
	// Sets default values for this actor's properties
	ABallActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PrintMessage();

protected:
	void SetImpulceForce(FVector Force);
};
