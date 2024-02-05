// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBear.h"

#include "ScreenConstants.h"
#include "FishPawn.h"
#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ATeddyBear::ATeddyBear()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBear::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Origin{};
	FVector BoxExtent{};
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionHeight = BoxExtent.Z;

	UStaticMeshComponent* StaticMesh;
	TArray<UStaticMeshComponent*> MeshComponents;
	GetComponents(MeshComponents);
	if (MeshComponents.Num() > 0)
	{
		StaticMesh = MeshComponents[0];
		StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ATeddyBear::OnOverlapBegin);
	}
}

// Called every frame
void ATeddyBear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Location = GetActorLocation();
	Location.Z -= CaidaVelocity * DeltaTime;
	SetActorLocation(Location);

	if (GetActorLocation().Z < ScreenConstants::Bottom - HalfCollisionHeight)
	{
		Destroy();
	}
}

void ATeddyBear::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComponent, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Fish"))
	{
		AFishPawn* Fish = (AFishPawn*)OtherActor;
		if (Fish != nullptr)
		{
			Health -= Fish->GetDamage();
			if (Health <= 0)
			{
				AGameHUD* GameHud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
				if (GameHud != nullptr)
				{
					GameHud->SetKills(1);
				}
				Destroy();
			}
		}
	}
}