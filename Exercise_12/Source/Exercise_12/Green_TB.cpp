// Fill out your copyright notice in the Description page of Project Settings.


#include "Green_TB.h"

/**
 * Sets default values
*/
AGreen_TB::AGreen_TB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AGreen_TB::BeginPlay()
{
	Super::BeginPlay();
	
	TArray <UStaticMeshComponent*> AllMeshes{};
	GetComponents(AllMeshes);

	if (AllMeshes.Num() > 0)
	{
		UStaticMeshComponent* Mesh = AllMeshes[0];
		Mesh->AddImpulse(FVector(0.f, 500.f, 0.f));
	}

}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AGreen_TB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

