// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorPawn.h"

#include "ScreenConstants.h"
#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACasadorPawn::ACasadorPawn() :
	Damage{ 25 }
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
	HalfMeshHeight = BoxExtent.Z;
	HalfMeshWidth = BoxExtent.Y;

	TArray<UStaticMeshComponent*> MeshComponents{};
	GetComponents(MeshComponents);

	if (MeshComponents.Num() > 0)
	{
		CasadorMesh = MeshComponents[0];
	}

	ResetPosition();
}

// Called every frame
void ACasadorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Move = ConsumeMovementInputVector();

	//UE_LOG(LogTemp, Warning, TEXT("Move.Z: %f"), Move.Z);

	if (Move.Y != 0 || Move.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += Move.Y * MoveSpeed * DeltaTime;
		NewLocation.Z += Move.Z * MoveSpeed * DeltaTime;
		SetActorLocation(NewLocation);
	}

	if (bOffScreen())
	{
		UGameplayStatics::PlaySound2D(this, RunAway);
		ResetPosition();
		GetDamage();
		if (Health <= 0)
		{
			Destroy();
		}
	}
}

void ACasadorPawn::ResetPosition()
{
	FVector NewPosition{ 0 };
	NewPosition.Y = 0;
	NewPosition.Z = 0;

	SetActorLocation(NewPosition);
}

void ACasadorPawn::GetDamage()
{
	AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	if (Hud != nullptr)
	{
		Hud->SetEscaped();
		Health -= Damage;
	}
}

int ACasadorPawn::GetHealth() const
{
	return Health;
}

void ACasadorPawn::MoveHorizontally(float ScaleValue)
{
	ScaleValue = FMath::Clamp(ScaleValue, -1.0f, 1.0f);
	
	AddMovementInput(GetActorRightVector(), ScaleValue);
}

void ACasadorPawn::MoveVertically(float ScaleValue)
{
	ScaleValue = FMath::Clamp(ScaleValue, -1.0f, 1.0f);

	AddMovementInput(GetActorUpVector(), ScaleValue);
}

bool ACasadorPawn::bOffScreen()
{
	FVector Location{ GetActorLocation() };
	return Location.Z < ScreenConstants::Bottom - HalfMeshHeight ||
		   Location.Z > ScreenConstants::Top + HalfMeshHeight ||
		   Location.Y < ScreenConstants::Left - HalfMeshWidth ||
		   Location.Y > ScreenConstants::Right + HalfMeshHeight;
}
