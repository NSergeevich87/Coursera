// Fill out your copyright notice in the Description page of Project Settings.


#include "CasadorPawn.h"

#include "ScreenConstants.h"
#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACasadorPawn::ACasadorPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SaveGameInstance = Cast<UCasadorSaveGame>(
		UGameplayStatics::LoadGameFromSlot("CasadorZeroDataSlot", 1)
	);
	if (SaveGameInstance != nullptr)
	{
		if (SaveGameInstance->CasadorHealth <= 0)
		{
			bSetHealth = false;
		}
		else
		{
			bSetHealth = true;
		}
		Health = SaveGameInstance->CasadorHealth;
		

	}
	else
	{
		bSetHealth = false;
		Health = 0;
		SaveGameInstance = Cast<UCasadorSaveGame>(UGameplayStatics::CreateSaveGameObject(
			UGameplayStatics::StaticClass())
		);
	}

	// reset saveddata to 0
	/*SaveGameInstance->CasadorHealth = 0;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, "CasadorHealthSlot", 1);*/
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

	TArray<AActor*> ConfigurationDataActors{};
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationDataActor", ConfigurationDataActors);
	if (ConfigurationDataActors.Num() > 0)
	{
		ConfigurationData = (AConfigurationDataActor*)ConfigurationDataActors[0];
	}

	ResetPosition();
}

// Called every frame
void ACasadorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bSetHealth)
	{
		SetHealthFromData();
	}

	FVector Move = ConsumeMovementInputVector();

	if (Move.Y != 0 || Move.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += Move.Y * ConfigurationData->GetCasadorMoveSpeed() * DeltaTime;
		NewLocation.Z += Move.Z * ConfigurationData->GetCasadorMoveSpeed() * DeltaTime;
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

void ACasadorPawn::SetHealthFromData()
{
	Health = ConfigurationData->GetCasadorHealth();
	bSetHealth = true;
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
		Health -= ConfigurationData->GetScreenOffDamage();
		SaveGameInstance->CasadorHealth = Health;
		UGameplayStatics::SaveGameToSlot(SaveGameInstance, "CasadorZeroDataSlot", 1);
	}
}

float ACasadorPawn::GetHealth()
{
	return Health;
}

void ACasadorPawn::SetHealth(float Hp)
{
	Health = Hp;
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
