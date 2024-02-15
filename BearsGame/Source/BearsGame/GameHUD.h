// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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
	void AddScore(int Value);
};
