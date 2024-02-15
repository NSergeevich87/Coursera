// Fill out your copyright notice in the Description page of Project Settings.


#include "ChainsawProjectileActor.h"

AChainsawProjectileActor::AChainsawProjectileActor() :
	AProjectileActor{}
{
	SetImpulseForce(FVector{ 0.f, 50.f, 0.f });
}
