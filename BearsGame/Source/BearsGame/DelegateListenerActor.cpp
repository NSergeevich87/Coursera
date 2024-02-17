// Fill out your copyright notice in the Description page of Project Settings.


#include "DelegateListenerActor.h"
#include "Kismet/GameplayStatics.h"

void ADelegateListenerActor::ReceiveMessage(FString Message)
{
	UE_LOG(LogTemp, Warning, TEXT("Got Message: %s"), *Message);
}

void ADelegateListenerActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Talker != nullptr)
	{
		Talker->MessageDelegate.Unbind();
	}
}

// Sets default values
ADelegateListenerActor::ADelegateListenerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADelegateListenerActor::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> TalkerActors{};
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Talker", TalkerActors);
	if (TalkerActors.Num() > 0)
	{
		Talker = Cast<ADelegateTalkerActor>(TalkerActors[0]);
		Talker->MessageDelegate.BindUObject(this, &ADelegateListenerActor::ReceiveMessage);
	}
}

// Called every frame
void ADelegateListenerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

