// Fill out your copyright notice in the Description page of Project Settings.


#include "ConvertTemperatures.h"

/**
 * Sets default values
*/
AConvertTemperatures::AConvertTemperatures()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AConvertTemperatures::BeginPlay()
{
	Super::BeginPlay();
	
	float OrigFahrenheit{};
	float Celsius{};
	float Fahrenheit{};

	OrigFahrenheit = 0;
	UE_LOG(LogTemp, Warning, TEXT("Orig temperature in Fahrenheit is: %f"), OrigFahrenheit);

	Celsius = (OrigFahrenheit - 32) / 9 * 5;
	UE_LOG(LogTemp, Warning, TEXT("In Celsius: %f"), Celsius);

	Fahrenheit = Celsius * 9 / 5 + 32;
	UE_LOG(LogTemp, Warning, TEXT("In Fahrenheit: %f"), Fahrenheit);

	OrigFahrenheit = 32;
	UE_LOG(LogTemp, Warning, TEXT("Orig temperature in Fahrenheit is: %f"), OrigFahrenheit);

	Celsius = (OrigFahrenheit - 32) / 9 * 5;
	UE_LOG(LogTemp, Warning, TEXT("In Celsius: %f"), Celsius);

	Fahrenheit = Celsius * 9 / 5 + 32;
	UE_LOG(LogTemp, Warning, TEXT("In Fahrenheit: %f"), Fahrenheit);

	OrigFahrenheit = 212;
	UE_LOG(LogTemp, Warning, TEXT("Orig temperature in Fahrenheit is: %f"), OrigFahrenheit);

	Celsius = (OrigFahrenheit - 32) / 9 * 5;
	UE_LOG(LogTemp, Warning, TEXT("In Celsius: %f"), Celsius);

	Fahrenheit = Celsius * 9 / 5 + 32;
	UE_LOG(LogTemp, Warning, TEXT("In Fahrenheit: %f"), Fahrenheit);


}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AConvertTemperatures::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

