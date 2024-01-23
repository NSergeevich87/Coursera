// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructorGM.h"
#include "Kismet/GameplayStatics.h"

/**
 * Sets default values
*/
ADestructorGM::ADestructorGM()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ADestructorGM::BeginPlay()
{
	Super::BeginPlay();
	
	StartDestructor();
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ADestructorGM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADestructorGM::StartTimer()
{
	FTimerHandle Timer{};
	GetWorldTimerManager().SetTimer(Timer, this, &ADestructorGM::StartDestructor, 5);
}

void ADestructorGM::StartDestructor()
{
	TArray<AActor*> ObjectsForDestuctor{};

	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Destructible", ObjectsForDestuctor);

	for (auto item : ObjectsForDestuctor)
	{
		item->Destroy();
	}

	StartTimer();
}

