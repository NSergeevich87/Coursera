// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	DrawText(ScoreText + FString::FromInt(Score), FLinearColor::White, OffsetLeft, OffsetUp, HudFont);
}

void AGameHUD::AddScore(int Value)
{
	Score += Value;
}
