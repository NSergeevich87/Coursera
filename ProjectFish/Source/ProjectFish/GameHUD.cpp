// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"

AGameHUD::AGameHUD()
{
	// try loading data
	SaveGameInstance = Cast<UProjectFishSaveGame>(
		UGameplayStatics::LoadGameFromSlot("FishShooterSaveSlot", 0)
	);
	if (SaveGameInstance != nullptr)
	{
		Kills = SaveGameInstance->NumKills;
	}
	else
	{
		Kills = 0;
		SaveGameInstance = Cast<UProjectFishSaveGame>(
			UGameplayStatics::CreateSaveGameObject(UProjectFishSaveGame::StaticClass())
		);
	}
	// reset kills to 0
	//SaveGameInstance->NumKills = 0;
	//UGameplayStatics::SaveGameToSlot(SaveGameInstance, "FishShooterSaveSlot", 0);
}

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	DrawText(
		StartText + FString::FromInt(Kills), 
		FLinearColor::Green, 
		HorizontalOffset, 
		VerticalOffset, 
		HudFont
	);
}

void AGameHUD::SetKills(int value)
{
	Kills += value;

	SaveGameInstance->NumKills = Kills;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, "FishShooterSaveSlot", 0);
}