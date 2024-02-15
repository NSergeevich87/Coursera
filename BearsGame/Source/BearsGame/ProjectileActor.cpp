// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileActor.h"
#include "ScreenConstants.h"

void AProjectileActor::SetImpulseForce(FVector Force)
{
	ImpulseForce = Force;
}

// Sets default values
AProjectileActor::AProjectileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectileActor::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Origin{};
	FVector BoxExtent{};
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;

	TArray<UStaticMeshComponent*> MeshComponents{};
	GetComponents(MeshComponents);
	if (MeshComponents.Num() > 0)
	{
		UStaticMeshComponent* MeshComp = MeshComponents[0];
		MeshComp->AddImpulse(ImpulseForce);
	}
}

// Called every frame
void AProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().Y + HalfCollisionWidth > ScreenConstants::Right)
	{
		Destroy();
	}
}