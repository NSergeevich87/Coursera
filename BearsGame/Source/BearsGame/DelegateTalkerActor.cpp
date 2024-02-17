// Fill out your copyright notice in the Description page of Project Settings.


#include "DelegateTalkerActor.h"

void ADelegateTalkerActor::StartTalkerTimer()
{
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ADelegateTalkerActor::Talk, 3);
}

void ADelegateTalkerActor::Talk()
{
	MessageDelegate.ExecuteIfBound("Message " + FString::FromInt(MessageNumber));
	MessageNumber++;
	StartTalkerTimer();
}

// Sets default values
ADelegateTalkerActor::ADelegateTalkerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADelegateTalkerActor::BeginPlay()
{
	Super::BeginPlay();
	
	StartTalkerTimer();
}

// Called every frame
void ADelegateTalkerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}