// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "CasadorPawn.h"
#include "Kismet/GameplayStatics.h"

AGameHUD::AGameHUD()
{
	SaveGameInstance = Cast<UCasadorSaveGame>(UGameplayStatics::LoadGameFromSlot("CasadorZeroDataSlot", 0));
	if (SaveGameInstance != nullptr)
	{
		EscapedCounter = SaveGameInstance->CasadorEscaped;
	}
	else
	{
		EscapedCounter = 0;
		SaveGameInstance = Cast<UCasadorSaveGame>(
			UGameplayStatics::CreateSaveGameObject(UCasadorSaveGame::StaticClass())
		);
	}

	// for reset data in savegameinstance

	/*SaveGameInstance->CasadorHealth = 0;
	SaveGameInstance->CasadorEscaped = 0;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, "CasadorZeroDataSlot", 0);*/
}

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

	SaveGameInstance->CasadorEscaped = EscapedCounter;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, "CasadorZeroDataSlot", 0);
}