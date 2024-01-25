// Fill out your copyright notice in the Description page of Project Settings.


#include "MinerPawn.h"
#include "ScreenConstants.h"

// Sets default values
AMinerPawn::AMinerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMinerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMinerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0 || PendingMovementInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += PendingMovementInput.Y * MoveAmountPerFrame;
		NewLocation.Y = FMath::Clamp(NewLocation.Y, ScreenConstants::Left + HalfCollisionWidth, ScreenConstants::Right - HalfCollisionWidth);
		NewLocation.Z += PendingMovementInput.Z * MoveAmountPerFrame;
		NewLocation.Z = FMath::Clamp(NewLocation.Z, ScreenConstants::Bottom + HalfCollisionHeight, ScreenConstants::Top - HalfCollisionHeight);
		SetActorLocation(NewLocation);
	}
}

// Called to bind functionality to input
//void AMinerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

void AMinerPawn::MoveHorizontally(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorRightVector(), moveScale * MoveAmountPerFrame);
}

void AMinerPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(), moveScale * MoveAmountPerFrame);
}

