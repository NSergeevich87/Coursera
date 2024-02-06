// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "CasadorPawn.h"

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	ACasadorPawn* CasadorPawn = (ACasadorPawn*)GetOwningPawn();
	if (CasadorPawn != nullptr)
	{
		DrawText(HealthText + FString::FromInt(CasadorPawn->GetHealth()),
			FLinearColor::Green,
			HorizontalOffset, VerticalOffset,
			Font);
	}

	DrawText(EscapedText + FString::FromInt(EscapedCounter),
		FLinearColor::Red,
		HorizontalOffset, VerticalOffset + 40,
		Font);
	
}

void AGameHUD::SetEscaped()
{
	EscapedCounter++;
}