// Fill out your copyright notice in the Description page of Project Settings.


#include "PirateProjectileActor.h"

APirateProjectileActor::APirateProjectileActor() :
	AProjectileActor{}
{
	SetImpulseForce(FVector{ 0.f, 100.f, 0.f });
}
