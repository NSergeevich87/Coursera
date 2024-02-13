// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BallActor.h"
#include "RedBallActor.generated.h"

/**
 * 
 */
UCLASS()
class MYMOVELT_API ARedBallActor : public ABallActor
{
	GENERATED_BODY()

private:
	virtual void PrintMessage() override;
};
