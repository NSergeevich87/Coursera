// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieProjectileActor.h"

AZombieProjectileActor::AZombieProjectileActor() :
	AProjectileActor{}
{
	SetImpulseForce(FVector{0.f, 200.f, 0.f});
}
