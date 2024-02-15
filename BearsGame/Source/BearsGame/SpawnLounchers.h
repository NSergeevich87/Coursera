// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LauncherActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnLounchers.generated.h"

UCLASS()
class BEARSGAME_API ASpawnLounchers : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Lounchers", meta = (AllowPrivateAccess = "true"))
	class TSubclassOf<ALauncherActor> ChainsawLauncher;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Lounchers", meta = (AllowPrivateAccess = "true"))
	class TSubclassOf<ALauncherActor> PirateLauncher;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Lounchers", meta = (AllowPrivateAccess = "true"))
	class TSubclassOf<ALauncherActor> ZombieLauncher;

	const float SpawnTimer{ 5.f };

	void StartTimer();

	UFUNCTION()
	void StartSpawn();

public:
	void DestroyLounchers();

public:	
	// Sets default values for this actor's properties
	ASpawnLounchers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
