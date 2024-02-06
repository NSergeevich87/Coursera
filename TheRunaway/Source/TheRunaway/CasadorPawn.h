// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CasadorPawn.generated.h"

UCLASS()
class THERUNAWAY_API ACasadorPawn : public APawn
{
	GENERATED_BODY()

private:
	float HalfMeshWidth;
	float HalfMeshHeight;
	float Health{ 100 };
	const float MoveSpeed{ 100 };

	class UStaticMeshComponent* CasadorMesh;

public:
	// Sets default values for this pawn's properties
	ACasadorPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ResetPosition();
	void GetDamage();
	int GetHealth() const;
	void MoveHorizontally(float ScaleValue);
	void MoveVertically(float ScaleValue);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float Damage;

	bool bOffScreen();
};
