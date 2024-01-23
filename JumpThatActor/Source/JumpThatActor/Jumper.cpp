// Copyright A.T. Chamillard. All Rights Reserved.


#include "Jumper.h"

/**
 * Sets default values
*/
AJumper::AJumper()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AJumper::BeginPlay()
{
	Super::BeginPlay();

	// start the jump timer
	StartJumpTimer();

}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AJumper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Jumps the Actor
*/
void AJumper::Jump()
{
	/*if (GEngine) GEngine->AddOnScreenDebugMessage(
		1, -1,
		FColor::Magenta,
		FString::Printf(TEXT("Jump..."))
	);*/

	UE_LOG(LogTemp, Warning, TEXT("Jump..."));

	// generate a random location to jump to
	FVector Location{ 0 };
	Location.SetComponentForAxis(EAxis::Y, FMath::RandRange(MinY, MaxY));
	Location.SetComponentForAxis(EAxis::Z, FMath::RandRange(MinZ, MaxZ));

	// jump to new location
	SetActorLocation(Location);

	// restart the jump timer
	StartJumpTimer();
}

/**
 * Starts the jump timer
*/
void AJumper::StartJumpTimer()
{
	// start the timer
	FTimerHandle Timer{};
	float Time{ 1 };
	GetWorldTimerManager().SetTimer(Timer, this, &AJumper::Jump, Time);
}