// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FishPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFISH_API AFishPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> PauseMenuWidgetClass;

public:
	virtual void SetupInputComponent() override;

	void MoveHorizontally(float input);

	void ShootFish();

private:
	void PauseMenu();

};
