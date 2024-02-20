// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateDeclarations.h"

#include "ConfigurationDataActor.h"
#include "Sound/SoundCue.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBear.generated.h"

UCLASS()
class PROJECTFISH_API ATeddyBear : public AActor
{
	GENERATED_BODY()

private:
	//const float CaidaVelocity{ 60 };
	float HalfCollisionHeight;
	int Health{ 100 };
	AConfigurationDataActor* ConfigurationData;

	FKillAddedEvent KillAddedEvent;

public:	
	FKillAddedEvent& GetKillAddedEvent();
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Sets default values for this actor's properties
	ATeddyBear();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* TeddyDeath;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(
		class UPrimitiveComponent* OverlappedComponent,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
