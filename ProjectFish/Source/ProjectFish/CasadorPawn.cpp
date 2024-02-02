// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorPawn.h"

#include "ScreenConstants.h"

// Sets default values
ACasadorPawn::ACasadorPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACasadorPawn::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Origin{};
	FVector BoxExtent{};
	GetActorBounds(true, Origin, BoxExtent);
	MeshHalfHight = BoxExtent.Z;
	MeshHalfWidth = BoxExtent.Y;

	TArray<UStaticMeshComponent*> MeshComponents{};
	GetComponents(MeshComponents);

	if (MeshComponents.Num() > 0)
	{
		StaticMeshComponent = MeshComponents[0];
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ACasadorPawn::OnBeginOverlap);
	}
}

void ACasadorPawn::OnBeginOverlap(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComponent, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ground"))
	{
		bJump = false;
	}
}

void ACasadorPawn::TimerJump()
{
	bJump = false;
}

// Called every frame
void ACasadorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MovingVectors = ConsumeMovementInputVector();
	if (MovingVectors.Y != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += MovingVectors.Y * MoveSpeed * DeltaTime;
		NewLocation.Y = FMath::Clamp(
			NewLocation.Y,
			ScreenConstants::Left + MeshHalfWidth,
			ScreenConstants::Right - MeshHalfWidth);
		SetActorLocation(NewLocation);
	}
}

void ACasadorPawn::HorizontalMove(float ScaleMove)
{
	ScaleMove = FMath::Clamp(ScaleMove, -1.0f, 1.0f);
	AddMovementInput(GetActorRightVector(), ScaleMove);
}

void ACasadorPawn::JumpImpulse()
{
	if (!bJump)
	{
		bJump = true;
		FVector ForceJump{ 0.f, 0.f, ForceMagnitude };
		StaticMeshComponent->AddImpulse(ForceJump);

		FTimerHandle Timer;
		GetWorldTimerManager().SetTimer(Timer, this, &ACasadorPawn::TimerJump, 0.25f);
	}
}