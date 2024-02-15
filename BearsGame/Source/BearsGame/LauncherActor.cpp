// Fill out your copyright notice in the Description page of Project Settings.


#include "LauncherActor.h"

void ALauncherActor::StartCooldownTimer()
{
	FTimerHandle Timer{};
	GetWorldTimerManager().SetTimer(Timer, this, &ALauncherActor::SpawnProjectile, CooldownSeconds);
}

void ALauncherActor::SetCooldownSeconds(float Value)
{
	if (Value > 0)
	{
		CooldownSeconds = Value;
	}
}

void ALauncherActor::SpawnProjectile()
{
	FVector Location{ GetActorLocation() };
	Location.Y += HalfCollisionWidth + ProjectileSpawnOffset;
	GetWorld()->SpawnActor<AProjectileActor>(Projectile, Location, FRotator::ZeroRotator);

	StartCooldownTimer();
}

// Sets default values
ALauncherActor::ALauncherActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALauncherActor::BeginPlay()
{
	Super::BeginPlay();

	FVector Origin{};
	FVector BoxExtent{};
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;

	StartCooldownTimer();
}

// Called every frame
void ALauncherActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

