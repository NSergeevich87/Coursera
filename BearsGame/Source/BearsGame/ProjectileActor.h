// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileActor.generated.h"

UCLASS()
class BEARSGAME_API AProjectileActor : public AActor
{
	GENERATED_BODY()
	
private:
	FVector ImpulseForce{ 0.0f };
	float HalfCollisionWidth{};

protected:
	void SetImpulseForce(FVector Force);

public:	
	// Sets default values for this actor's properties
	AProjectileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
