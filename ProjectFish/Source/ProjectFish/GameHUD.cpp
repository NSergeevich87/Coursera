// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

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
}