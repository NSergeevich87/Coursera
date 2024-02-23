// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"

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
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> PauseMenuWidgetClass;

private:
	void PauseGame();

public:
	virtual void SetupInputComponent() override;
	void DestroyAllLaunchers();
};
