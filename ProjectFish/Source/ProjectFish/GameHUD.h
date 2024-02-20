// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateDeclarations.h"

#include "ProjectFishSaveGame.h"
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

	UProjectFishSaveGame* SaveGameInstance;

public:
	AGameHUD();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
	UFont* HudFont;

	virtual void DrawHUD() override;

	void SetKills();

	FDelegateHandle AddToKillAddedEvent(FKillAddedEvent& KillAddedEvent);

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
