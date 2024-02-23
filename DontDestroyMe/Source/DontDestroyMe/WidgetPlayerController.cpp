// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetPlayerController.h"
#include "Kismet/GameplayStatics.h"

void AWidgetPlayerController::BeginPlay()
{
	Super::BeginPlay();

	SetInputMode(FInputModeGameAndUI());
	bShowMouseCursor = true;
}

void AWidgetPlayerController::DestroyPawn()
{
	TArray<AActor*> Pawns;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Destroy", Pawns);
	if (Pawns.Num() > 0)
	{
		for (size_t i = 0; i < Pawns.Num(); i++)
		{
			Pawns[i]->Destroy();
		}
	}
}
