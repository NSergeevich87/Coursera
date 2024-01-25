// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyController.generated.h"

/**
 * 
 */
UCLASS()
class EXERCISE7_API AMyController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetupInputComponent() override;
	void MoveHorizontally(float input);
	void MoveVertically(float input);
};
