// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CasadorPawn.generated.h"

UCLASS()
class PROJECTFISH_API ACasadorPawn : public APawn
{
	GENERATED_BODY()

private:
	const float MoveSpeed{ 100 };
	float MeshHalfWidth{};
	float MeshHalfHight{};

	const float ForceMagnitude{ 1000 };
	bool bJump{ false };

	class UStaticMeshComponent* StaticMeshComponent;
	class UPrimitiveComponent* CollisionBox;

public:
	// Sets default values for this pawn's properties
	ACasadorPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HorizontalMove(float ScaleMove);
	void JumpImpulse();

	UFUNCTION()
	void OnBeginOverlap(
		class UPrimitiveComponent* OverlappedComponent,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	void TimerJump();
};
