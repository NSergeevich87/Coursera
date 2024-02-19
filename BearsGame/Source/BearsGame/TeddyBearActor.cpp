// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBearActor.h"

#include "Kismet/GameplayStatics.h"
//#include "GameHUD.h"
#include "ScreenConstants.h"
#include "EventManagerActor.h"

float ATeddyBearActor::GetHalfCollisionWidth()
{
	return HalfCollisionWidth;
}

void ATeddyBearActor::SetTeddyBearPoints(int Points)
{
	TeddyBearPoints = Points;
}

void ATeddyBearActor::AddTeddyBearPointsToHud()
{
	// broadcast event to add points
	PointsAddedEvent.Broadcast(TeddyBearPoints);

	/*AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	if (Hud != nullptr)
	{
		Hud->AddScore(TeddyBearPoints);
	}*/
}

void ATeddyBearActor::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComponent, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Projectile"))
	{
		ProcessProjectileCollision();
	}
}

void ATeddyBearActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
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

FPointsAddedEvent& ATeddyBearActor::GetPointsAddedEvent()
{
	// TODO: insert return statement here
	return PointsAddedEvent;
}

// Sets default values
ATeddyBearActor::ATeddyBearActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBearActor::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Origin{};
	FVector BoxExtent{};
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;

	class UStaticMeshComponent* StaticMeshComponent{};
	TArray<UStaticMeshComponent*> StaticMeshComponents{};
	GetComponents(StaticMeshComponents);
	if (StaticMeshComponents.Num() > 0)
	{
		StaticMeshComponent = StaticMeshComponents[0];
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ATeddyBearActor::OnOverlapBegin);
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
void ATeddyBearActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Location = GetActorLocation();
	Location.Y -= MoveAmountPerSecond * DeltaTime;
	SetActorLocation(Location);

	if (GetActorLocation().Y < ScreenConstants::Left - HalfCollisionWidth)
	{
		Destroy();
	}
}

