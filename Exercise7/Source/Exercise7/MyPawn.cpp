// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "ScreenParam.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector GetValueInput = ConsumeMovementInputVector();
	if (GetValueInput.Y != 0 || GetValueInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += GetValueInput.Y;
		NewLocation.Y = FMath::Clamp(NewLocation.Y, ScreenParam::Left + MeshHalfWidth, ScreenParam::Right - MeshHalfWidth);
		NewLocation.Z += GetValueInput.Z;
		NewLocation.Y = FMath::Clamp(NewLocation.Z, ScreenParam::Bottom + MeshHalfHeight, ScreenParam::Top - MeshHalfHeight);
		SetActorLocation(NewLocation);
	}
}

void AMyPawn::MoveHorizontally(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorRightVector(), moveScale * MoveAmountPerFrame);
}

void AMyPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(), moveScale * MoveAmountPerFrame);
}

