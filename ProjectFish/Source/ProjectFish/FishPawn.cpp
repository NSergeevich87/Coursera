// Fill out your copyright notice in the Description page of Project Settings.


#include "FishPawn.h"
#include "ScreenConstants.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFishPawn::AFishPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFishPawn::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;

	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	if (StaticMeshComponents.Num() > 0)
	{
		StaticMeshComponent = StaticMeshComponents[0];
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AFishPawn::OnOverlapBegin);
	}

	TArray<AActor*> ConfigurationDataActors{};
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationDataActor", ConfigurationDataActors);
	if (ConfigurationDataActors.Num() > 0)
	{
		ConfigurationData = (AConfigurationDataActor*)ConfigurationDataActors[0];
	}

	ResetToStartState();
}

// Called every frame
void AFishPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += PendingMovementInput.Y * ConfigurationData->GetFishMoveAmountPerSecond() * DeltaTime;
		NewLocation.Y = FMath::Clamp(
			NewLocation.Y,
			ScreenConstants::Left + HalfCollisionWidth,
			ScreenConstants::Right - HalfCollisionWidth);

		SetActorLocation(NewLocation);
	}

	if (GetActorLocation().Z > ScreenConstants::Top + HalfCollisionHeight)
	{
		ResetToStartState();
	}
}

int AFishPawn::GetDamage() const
{
	return Damage;
}

void AFishPawn::SetDamage(int FishDamage)
{
	Damage = FishDamage;
}

void AFishPawn::MoveHorizontally(float MoveScale)
{
	MoveScale = FMath::Clamp(MoveScale, -1.f, 1.f);
	AddMovementInput(GetActorRightVector(), MoveScale);
}

void AFishPawn::Shoot()
{
	if (!WasShot)
	{
		WasShot = true;
		FVector ForceVector{ 0, 0, ConfigurationData->GetFishForceMagnitude() };
		StaticMeshComponent->AddImpulse(ForceVector);
	}
}

void AFishPawn::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComponent, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor->ActorHasTag("TeddyBear"))
	{
		ResetToStartState();
	}
}

void AFishPawn::ResetToStartState()
{
	FVector NewLocation{ 0 };
	NewLocation.Z = ScreenConstants::Bottom + HalfCollisionHeight;
	SetActorLocation(NewLocation);

	WasShot = false;

	StaticMeshComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
}

