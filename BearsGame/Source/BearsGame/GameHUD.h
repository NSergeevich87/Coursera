// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateDeclarations.h"

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class BEARSGAME_API AGameHUD : public AHUD
{
	GENERATED_BODY()
	
private:
	const float OffsetUp{ 150 };
	const float OffsetLeft{ 75 };
	const FString ScoreText{ "Score: " };
	int Score{ 0 };

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUDFont")
	UFont* HudFont;
	virtual void DrawHUD() override;
	UFUNCTION()
	void AddScore(int Value);
	/**
	 * Adds this object to the given points added event
	 * @param PointsAddedEvent points added event
	 * @return delegate handle
	*/
	FDelegateHandle AddToPointsAddedEvent(FPointsAddedEvent& PointsAddedEvent);
	/**
	 * Called when actor is being removed from level
	 * @param EndPlayReason why the actor is being removed
	*/
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;
};
