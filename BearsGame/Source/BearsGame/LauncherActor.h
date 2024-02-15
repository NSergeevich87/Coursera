// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProjectileActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LauncherActor.generated.h"

UCLASS()
class BEARSGAME_API ALauncherActor : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectiles, meta = (AllowPrivateAccess = "true"))
	class TSubclassOf<AProjectileActor> Projectile{};

	float HalfCollisionWidth{};
	float CooldownSeconds{ 0 };
	float ProjectileSpawnOffset{ 15 };

	void StartCooldownTimer();

protected:
	void SetCooldownSeconds(float Value);

public:
	UFUNCTION()
	void SpawnProjectile();

public:	
	// Sets default values for this actor's properties
	ALauncherActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
