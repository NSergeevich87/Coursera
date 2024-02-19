// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DelegateDeclarations.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE_OneParam(FPointsAddedEvent, int);

UCLASS()
class BEARSGAME_API UDelegateDeclarations : public UObject
{
	GENERATED_BODY()

};
