// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CasadorSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class THERUNAWAY_API UCasadorSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, Category = "Saved Game Data")
	float CasadorHealth{};

	UPROPERTY(VisibleAnywhere, Category = "Saved Game Data")
	int CasadorEscaped{};
};
