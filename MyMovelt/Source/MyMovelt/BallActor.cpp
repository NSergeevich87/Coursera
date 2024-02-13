// Fill out your copyright notice in the Description page of Project Settings.


#include "BallActor.h"

// Sets default values
ABallActor::ABallActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABallActor::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<UStaticMeshComponent*> StaticMeshComponents{};
	GetComponents(StaticMeshComponents);
	if (StaticMeshComponents.Num() > 0)
	{
		UStaticMeshComponent* MeshComponent = StaticMeshComponents[0];
		MeshComponent->AddImpulse(ImpulceForce);
	}

	PrintMessage();
}

// Called every frame
void ABallActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallActor::PrintMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("I'm a white ball!"));
}

void ABallActor::SetImpulceForce(FVector Force)
{
	ImpulceForce = Force;
}

