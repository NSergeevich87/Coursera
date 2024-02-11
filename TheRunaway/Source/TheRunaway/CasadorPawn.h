// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CasadorSaveGame.h"
#include "ConfigurationDataActor.h"
#include "Sound/SoundCue.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CasadorPawn.generated.h"

UCLASS()
class THERUNAWAY_API ACasadorPawn : public APawn
{
	GENERATED_BODY()

private:
	bool bSetHealth{ false };
	float HalfMeshWidth;
	float HalfMeshHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Casador Param", meta = (AllowPrivateAccess = "true"))
	float Health{ 100 };

	class UStaticMeshComponent* CasadorMesh;
	AConfigurationDataActor* ConfigurationData{};
	UCasadorSaveGame* SaveGameInstance;

public:
	// Sets default values for this pawn's properties
	ACasadorPawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* RunAway;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetHealthFromData();
	void ResetPosition();
	void GetDamage();
	float GetHealth();
	void SetHealth(float Hp);
	void MoveHorizontally(float ScaleValue);
	void MoveVertically(float ScaleValue);

private:
	bool bOffScreen();
};
