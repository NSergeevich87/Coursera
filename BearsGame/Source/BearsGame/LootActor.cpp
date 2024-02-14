// Fill out your copyright notice in the Description page of Project Settings.


#include "LootActor.h"
#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"

void ALootActor::SetLootDestroyPoints(int Points)
{
	LootDestroyPoints = Points;
}

void ALootActor::AddLootDestroyPointsToHud()
{
	AddPointsToHud(LootDestroyPoints);
}

void ALootActor::AddPointsToHud(int Points)
{
	AGameHUD* GameHud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	if (GameHud != nullptr)
	{
		GameHud->AddScore(Points);
	}
}

void ALootActor::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComponent, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor != nullptr)
	{
		if (OtherActor->ActorHasTag("Projectile"))
		{
			AddLootDestroyPointsToHud();
			OtherActor->Destroy();
			Destroy();
		}
		else if (OtherActor->ActorHasTag("TeddyBear"))
		{
			ProcessTeddyBearCollision(OtherActor);
		}
	}
}

// Sets default values
ALootActor::ALootActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALootActor::BeginPlay()
{
	Super::BeginPlay();
	
	class UStaticMeshComponent* MeshComponent{};
	TArray<UStaticMeshComponent*> MeshComponents{};
	GetComponents(MeshComponents);

	if (MeshComponents.Num() > 0)
	{
		MeshComponent = MeshComponents[0];
		MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ALootActor::OnOverlapBegin);
	}
}

// Called every frame
void ALootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

