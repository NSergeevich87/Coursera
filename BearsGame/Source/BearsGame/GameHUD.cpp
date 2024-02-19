// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

#include "Kismet/GameplayStatics.h"
#include "EventManagerActor.h"

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	DrawText(ScoreText + FString::FromInt(Score), FLinearColor::White, OffsetLeft, OffsetUp, HudFont);
}

void AGameHUD::AddScore(int Value)
{
	Score += Value;
}

FDelegateHandle AGameHUD::AddToPointsAddedEvent(FPointsAddedEvent& PointsAddedEvent)
{
	return PointsAddedEvent.AddUObject(this,
		&AGameHUD::AddScore);
}

void AGameHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove from event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->RemoveListener(this);
	}
}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->AddListener(this);
	}
}
