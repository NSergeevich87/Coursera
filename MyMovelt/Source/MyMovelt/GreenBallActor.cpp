// Fill out your copyright notice in the Description page of Project Settings.


#include "GreenBallActor.h"

AGreenBallActor::AGreenBallActor() : ABallActor()
{
	ABallActor::SetImpulceForce(ImpulceForce);
}

void AGreenBallActor::PrintMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("I'm a GreenBall moving up!"));
}
