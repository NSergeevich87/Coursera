// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class EXERCISE7_API AMyPawn : public APawn
{
	GENERATED_BODY()

private:
	const float MoveAmountPerFrame{ 3 };
	const float MeshHalfHeight{ 16 };
	const float MeshHalfWidth{ 12 };

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MoveHorizontally(float moveScale);
	void MoveVertically(float moveScale);
};
