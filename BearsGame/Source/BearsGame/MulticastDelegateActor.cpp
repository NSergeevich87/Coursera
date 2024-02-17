// Fill out your copyright notice in the Description page of Project Settings.


#include "MulticastDelegateActor.h"

void AMulticastDelegateActor::StartTimer()
{
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AMulticastDelegateActor::SendMessage, 2);
}

void AMulticastDelegateActor::SendMessage()
{
	MessageDelegate.Broadcast("Message " + FString::FromInt(Number));

	Number++;
	StartTimer();
}

// Sets default values
AMulticastDelegateActor::AMulticastDelegateActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMulticastDelegateActor::BeginPlay()
{
	Super::BeginPlay();
	
	StartTimer();
}

// Called every frame
void AMulticastDelegateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

