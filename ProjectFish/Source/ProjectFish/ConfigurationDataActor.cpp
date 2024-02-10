// Fill out your copyright notice in the Description page of Project Settings.


#include "ConfigurationDataActor.h"

float AConfigurationDataActor::GetFishMoveAmountPerSecond()
{
	return ConfigurationDataRow->FishMoveAmountPerSecond;
}

float AConfigurationDataActor::GetFishForceMagnitude()
{
	return ConfigurationDataRow->FishForceMagnitude;
}

float AConfigurationDataActor::GetTeddyMoveAmountPerSecond()
{
	return ConfigurationDataRow->TeddyMoveAmountPerSecond;
}

float AConfigurationDataActor::GetMinSpawnDelaySeconds()
{
	return ConfigurationDataRow->MinSpawnDelaySeconds;
}

float AConfigurationDataActor::GetMaxSpawnDelaySeconds()
{
	return ConfigurationDataRow->MaxSpawnDelaySeconds;
}

// Sets default values
AConfigurationDataActor::AConfigurationDataActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AConfigurationDataActor::BeginPlay()
{
	Super::BeginPlay();

	FString ContextString;
	ConfigurationDataRow = ConfigurationDataTable->FindRow<FConfigurationDataStruct>(
		"ConfigData", ContextString
	);
}

// Called every frame
void AConfigurationDataActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

