// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CasadorController.generated.h"

/**
 * 
 */
UCLASS()
class THERUNAWAY_API ACasadorController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetupInputComponent() override;

	void HorizontallyInput(float input);

	void VerticallyInput(float input);
};