// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetPawn.h"

// Sets default values
AWidgetPawn::AWidgetPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWidgetPawn::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorLocation(FVector::ZeroVector);

	/*UStaticMesh* StaticMesh;
	TArray<APawn*> Components;
	GetComponents(Components);
	if (Components.Num() > 0)
	{
		StaticMesh = Cast<UStaticMesh>(Components[0]);
	}*/
}

// Called every frame
void AWidgetPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWidgetPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

