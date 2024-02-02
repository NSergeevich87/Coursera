// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CasadorController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFISH_API ACasadorController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void SetupInputComponent() override;

	void HorizontalMove(float input);
	void JumpImpulse();
};
