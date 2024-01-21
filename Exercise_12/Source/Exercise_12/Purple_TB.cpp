// Fill out your copyright notice in the Description page of Project Settings.


#include "Purple_TB.h"

/**
 * Sets default values
*/
APurple_TB::APurple_TB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void APurple_TB::BeginPlay()
{
	Super::BeginPlay();

	TArray <UStaticMeshComponent*> Meshes{};
	GetComponents(Meshes);

	if (Meshes.Num() > 0)
	{
		UStaticMeshComponent* Mesh = Meshes[0];
		Mesh->AddImpulse(FVector(0.f, -200.f, 0.f));
	}
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void APurple_TB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

