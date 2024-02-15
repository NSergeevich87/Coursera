// Fill out your copyright notice in the Description page of Project Settings.


#include "BearsGamePlayerController.h"
#include "SpawnLounchers.h"
#include "Kismet/GameplayStatics.h"

void ABearsGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent != nullptr)
	InputComponent->BindAction("Destroyer", EInputEvent::IE_Released, this, &ABearsGamePlayerController::DestroyAllLaunchers);
}

void ABearsGamePlayerController::DestroyAllLaunchers()
{
	UE_LOG(LogTemp, Warning, TEXT("Space!"));
	TArray<AActor*> Spawners;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Spawner", Spawners);
	if (Spawners.Num() > 0)
	{
		ASpawnLounchers* Spawner = Cast<ASpawnLounchers>(Spawners[0]);
		if (Spawner != nullptr)
		{
			Spawner->DestroyLounchers();
		}
	}
}
