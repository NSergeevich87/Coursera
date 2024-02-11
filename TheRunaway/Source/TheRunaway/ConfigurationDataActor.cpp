// Fill out your copyright notice in the Description page of Project Settings.


#include "ConfigurationDataActor.h"

float AConfigurationDataActor::GetCasadorMoveSpeed()
{
	return ConfigurationDataRow->CasadorMoveSpeed;
}

float AConfigurationDataActor::GetCasadorHealth()
{
	return ConfigurationDataRow->CasadorHealth;
}

float AConfigurationDataActor::GetScreenOffDamage()
{
	return ConfigurationDataRow->OffScreenDamage;
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
	
	FString DataString;
	ConfigurationDataRow = ConfigurationDataTable->FindRow<FConfigurationDataStruct>(
			"ConfigData", DataString
		);
}

// Called every frame
void AConfigurationDataActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}