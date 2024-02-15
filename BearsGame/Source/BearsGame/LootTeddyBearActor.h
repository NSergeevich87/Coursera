// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LootActor.h"
#include "CoreMinimal.h"
#include "TeddyBearActor.h"
#include "LootTeddyBearActor.generated.h"

UCLASS()
class BEARSGAME_API ALootTeddyBearActor : public ATeddyBearActor
{
	GENERATED_BODY()
	
private:
	const float LootDropOffset{ 6.0f };

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Loot, meta = (AllowPrivateAccess = "true"))
	class TSubclassOf<ALootActor> UBadLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Loot, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ALootActor> UGoodLoot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void DropLoot(FVector ActorLocation, TSubclassOf<ALootActor> LootActor);
};
