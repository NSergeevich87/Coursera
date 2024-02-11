// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ProjectFishSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFISH_API UProjectFishSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "Saved Game Data")
	int NumKills{};
};
