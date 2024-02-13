// This is greenballactor wich will move up

#pragma once

#include "CoreMinimal.h"
#include "BallActor.h"
#include "GreenBallActor.generated.h"

/**
 * 
 */
UCLASS()
class MYMOVELT_API AGreenBallActor : public ABallActor
{
	GENERATED_BODY()

private:
	FVector ImpulceForce{ 0.f, 0.f, 200.f };

public:
	AGreenBallActor();

	virtual void PrintMessage() override;
	
};
