// Fill out your copyright notice in the Description page of Project Settings.


#include "MulticastDelegateListenerActor.h"
#include "Kismet/GameplayStatics.h"

void AMulticastDelegateListenerActor::ReseiveMessage(FString Message)
{
	UE_LOG(LogTemp, Warning, TEXT("Got message: %s"), *Message);
}

void AMulticastDelegateListenerActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Talker != nullptr)
	{
		Talker->MessageDelegate.Remove(DelegateHandle);
	}
}

// Sets default values
AMulticastDelegateListenerActor::AMulticastDelegateListenerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMulticastDelegateListenerActor::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> MulticastTalkers{};
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Talker", MulticastTalkers);

	if (MulticastTalkers.Num() > 0)
	{
		Talker = Cast<AMulticastDelegateActor>(MulticastTalkers[0]);
		DelegateHandle = Talker->MessageDelegate.AddUObject(
			this, &AMulticastDelegateListenerActor::ReseiveMessage);
	}
}

// Called every frame
void AMulticastDelegateListenerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

