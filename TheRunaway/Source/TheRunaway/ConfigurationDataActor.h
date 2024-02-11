// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "ConfigurationDataStruct.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConfigurationDataActor.generated.h"

UCLASS()
class THERUNAWAY_API AConfigurationDataActor : public AActor
{
	GENERATED_BODY()
	
private:
	struct FConfigurationDataStruct* ConfigurationDataRow;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration Data Table")
	UDataTable* ConfigurationDataTable;

	float GetCasadorMoveSpeed();
	float GetCasadorHealth();
	float GetScreenOffDamage();

public:	
	// Sets default values for this actor's properties
	AConfigurationDataActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};