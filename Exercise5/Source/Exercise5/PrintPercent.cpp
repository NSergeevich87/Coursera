// Copyright NSergeevich. All Rights Reserved.

#include "PrintPercent.h"

/**
 * Sets default values
*/
APrintPercent::APrintPercent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void APrintPercent::BeginPlay()
{
	Super::BeginPlay();

	const int TotalScore{ 100 };
	int ActualScore{ 33 };
	float PercentScore = static_cast<float>(ActualScore) / TotalScore;
	UE_LOG(LogTemp, Warning, TEXT("PrintPercent: %f"), PercentScore * 100);
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void APrintPercent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

