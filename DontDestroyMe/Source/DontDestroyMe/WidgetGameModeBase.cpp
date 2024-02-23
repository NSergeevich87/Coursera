// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetGameModeBase.h"

AWidgetGameModeBase::AWidgetGameModeBase()
{
	ConstructorHelpers::FObjectFinder<UClass> 
		PawnClass(TEXT("Class'/Game/_Game/Blueprints/BP_WidgetPawn.BP_WidgetPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/_Game/Blueprints/BP_WidgetPlayerController.BP_WidgetPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}

void AWidgetGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (ButtonWidget != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ButtonWidget);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			FVector2D Position{ 1100.f, 250.f };
			CurrentWidget->SetPositionInViewport(Position);
		}
	}
}
