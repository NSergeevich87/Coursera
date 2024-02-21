// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetGameModeBase.h"

AWidgetGameModeBase::AWidgetGameModeBase()
{
	ConstructorHelpers::FObjectFinder<UClass>PawnClass(TEXT("Class'/Game/_Game/Blueprints/BP_WidgetPawn.BP_WidgetPawn_C'"));

}
