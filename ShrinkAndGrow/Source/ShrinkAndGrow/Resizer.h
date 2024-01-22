// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Resizer.generated.h"

/**
 * An actor that shrinks and grows
*/
UCLASS()
class SHRINKANDGROW_API AResizer : public AActor
{
	GENERATED_BODY()

private:
	// timer support
	const float TotalResizeSeconds = 3;
	float ElapsedResizeSeconds = 0;

	// resizing control
	const float ScaleChangePerSecond = 2;
	int ScaleChangeSignMultiplier = 1;

public:
	/**
	 * Sets default values for this actor's properties
	*/
	AResizer();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
	*/
	virtual void Tick(float DeltaTime) override;

};
