// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WidgetGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DONTDESTROYME_API AWidgetGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AWidgetGameModeBase();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI buttons")
	TSubclassOf<UUserWidget> ButtonWidget;

	virtual void BeginPlay() override;
};
