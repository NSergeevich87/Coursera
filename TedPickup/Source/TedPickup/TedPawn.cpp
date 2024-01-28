// Fill out your copyright notice in the Description page of Project Settings.


#include "TedPawn.h"
#include "TedController.h"

// Sets default values
ATedPawn::ATedPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATedPawn::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	if (StaticMeshComponents.Num() > 0)
	{
		StaticMeshComponent = StaticMeshComponents[0];
	}

	StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ATedPawn::OnOverlapBegin);
}

// Called every frame
void ATedPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATedPawn::GoToPickup(APickup* Pickup)
{
	TargetPickup = Pickup;

	FVector ForceVector = GetForceVector(GetActorLocation(), TargetPickup->GetActorLocation());
	StaticMeshComponent->AddImpulse(ForceVector);
}

void ATedPawn::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComponent, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor == TargetPickup)
	{
		StaticMeshComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector);

		ATedController* TedController = (ATedController*)GetController();
		if (TedController != nullptr)
		{
			TedController->DestroyPickup(TargetPickup);
		}
	}
}

FVector ATedPawn::GetForceVector(FVector PawnLocation, FVector PickupLocation)
{
	FVector Direction = PickupLocation - PawnLocation;
	Direction.Normalize();

	return Direction * ForceMagnitude;
}

