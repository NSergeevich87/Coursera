// Copyright NSergeevich. All Rights Reserved.



#include "PrintFavoriteGames.h"

/**
 * Sets default values
*/
APrintFavoriteGames::APrintFavoriteGames()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void APrintFavoriteGames::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Baldur's Gate"));
	UE_LOG(LogTemp, Warning, TEXT("Fallout"));
	UE_LOG(LogTemp, Warning, TEXT("Diablo"));
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void APrintFavoriteGames::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

