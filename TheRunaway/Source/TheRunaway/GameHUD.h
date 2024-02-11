// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CasadorSaveGame.h"
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class THERUNAWAY_API AGameHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AGameHUD();

private:
	const float HorizontalOffset{ 50 };
	const float VerticalOffset{ 100 };
	const FString HealthText{ "Health: " };
	const FString EscapedText{ "Escaped: " };
	int EscapedCounter{ 0 };

	UCasadorSaveGame* SaveGameInstance;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameFont)
	UFont* Font;

	virtual void DrawHUD() override;

	void SetEscaped();
};
