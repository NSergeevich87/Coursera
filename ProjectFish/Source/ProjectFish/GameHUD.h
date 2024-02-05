// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFISH_API AGameHUD : public AHUD
{
	GENERATED_BODY()

private:
	const float HorizontalOffset{ 50 };
	const float VerticalOffset{ 100 };
	const FString StartText{ "Kills: " };
	int Kills{ 0 };

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
	UFont* HudFont;

	virtual void DrawHUD() override;

	void SetKills(int value);
};
