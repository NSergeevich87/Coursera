// Fill out your copyright notice in the Description page of Project Settings.


#include "LootActor.h"
//#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"
#include "EventManagerActor.h"

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
	PointsAddedEvent.Broadcast(Points);

	/*AGameHUD* GameHud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	if (GameHud != nullptr)
	{
		GameHud->AddScore(Points);
	}*/
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

void ALootActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove from event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->RemoveInvoker(this);
	}
}

FPointsAddedEvent& ALootActor::GetPointsAddedEvent()
{
	// TODO: insert return statement here
	return PointsAddedEvent;
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

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->AddInvoker(this);
	}
}

// Called every frame
void ALootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

