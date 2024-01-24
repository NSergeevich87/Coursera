// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterPlayerController.h"
#include "CharacterPawn.h"
#include "Kismet/GameplayStatics.h"

void ACharacterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	/*check(InputComponent != nullptr);
	InputComponent->BindAction("DestroyCharacter", EInputEvent::IE_Pressed, this, &ACharacterPlayerController::DestroyCharacterPawn);*/

	/*check(InputComponent);
	InputComponent->BindAction("JumpMiner", EInputEvent::IE_Released, this, &ACharacterPlayerController::JumpMinerPawn);*/

	check(InputComponent);
	InputComponent->BindAction("SpawnTeddyBear", EInputEvent::IE_Released, this, &ACharacterPlayerController::SpawnTeddyBear);
	InputComponent->BindAction("DestroyTeddyBear", EInputEvent::IE_Released, this, &ACharacterPlayerController::DestroyTeddyBear);
}

void ACharacterPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	
	// convert mouse position to world location
	FVector WorldLocation;
	FVector WorldRotation;
	DeprojectMousePositionToWorld(WorldLocation, WorldRotation);

	// move location to y-z plane and move pawn
	WorldLocation.X = 0;
	ACharacterPawn* CharacterPawn = (ACharacterPawn*)GetPawn();
	if (CharacterPawn != nullptr)
	{
		CharacterPawn->SetLocation(WorldLocation);
	}
	
}

void ACharacterPlayerController::DestroyCharacterPawn()
{
	ACharacterPawn* CharacterPawn = (ACharacterPawn*)GetPawn();
	if (CharacterPawn != nullptr)
	{
		CharacterPawn->Destroy();
	}
}

void ACharacterPlayerController::JumpMinerPawn()
{
	FVector WorldLocation{};
	FVector WorldDirection{};
	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

	WorldLocation.X = 0;
	ACharacterPawn* CharacterPawn = (ACharacterPawn*)GetPawn();
	if (CharacterPawn != nullptr)
	{
		CharacterPawn->SetLocation(WorldLocation);
	}
}

void ACharacterPlayerController::SpawnTeddyBear()
{
	FVector WorldLocation;
	FVector WorldDirection;
	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	WorldLocation.X = 0;

	int num = FMath::RandRange(0, 2);
	TSubclassOf<ATeddyBear> TeddyBear{};

	switch (num)
	{
	case 0:
		TeddyBear = TeddyBear_Green;
		break;
	case 1:
		TeddyBear = TeddyBear_Yellow;
		break;
	case 2:
		TeddyBear = TeddyBear_Purple;
		break;
	default:
		break;
	}
	
	WorldLocation.Z -= 32;
	GetWorld()->SpawnActor<ATeddyBear>(TeddyBear, WorldLocation, FRotator::ZeroRotator);
}

void ACharacterPlayerController::DestroyTeddyBear()
{
	TArray<AActor*> Bears{};
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "TeddyBear", Bears);

	for (int i = 0; i < Bears.Num(); i++)
	{
		Bears[i]->Destroy();
	}
}
