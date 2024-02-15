// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BearsGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BEARSGAME_API ABearsGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetupInputComponent() override;
	void DestroyAllLaunchers();
};
