// Fill out your copyright notice in the Description page of Project Settings.


#include "EventManagerActor.h"

// Sets default values
AEventManagerActor::AEventManagerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEventManagerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEventManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEventManagerActor::AddInvoker(ATeddyBear* Invoker)
{
	KillAddedEventInvokers.Add(Invoker);
	for (auto& item : KillAddedEventListeners)
	{
		FDelegateHandle DelegateHandle = item.Key->AddToKillAddedEvent(Invoker->GetKillAddedEvent());
		item.Value.Add(Invoker, DelegateHandle);
	}
}

void AEventManagerActor::RemoveInvoker(ATeddyBear* Invoker)
{
	for (auto& item : KillAddedEventListeners)
	{
		if (item.Value.Contains(Invoker))
		{
			Invoker->GetKillAddedEvent().Remove(item.Value[Invoker]);
			item.Value.Remove(Invoker);
		}
	}

	KillAddedEventInvokers.Remove(Invoker);
}

void AEventManagerActor::AddListener(AGameHUD* Listener)
{
	KillAddedEventListeners.Add(Listener);
	for (auto& item : KillAddedEventInvokers)
	{
		FDelegateHandle DelegateHandle = Listener->AddToKillAddedEvent(item->GetKillAddedEvent());
		KillAddedEventListeners[Listener].Add(item, DelegateHandle);
	}
}

void AEventManagerActor::RemoveListener(AGameHUD* Listener)
{
	for (auto& item : KillAddedEventInvokers)
	{
		if (KillAddedEventListeners[Listener].Contains(item))
		{
			item->GetKillAddedEvent().Remove(KillAddedEventListeners[Listener][item]);
			KillAddedEventListeners[Listener].Remove(item);
		}
	}

	KillAddedEventListeners.Remove(Listener);
}

