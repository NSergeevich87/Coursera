// Fill out your copyright notice in the Description page of Project Settings.


#include "ChainsawLauncherActor.h"

AChainsawLauncherActor::AChainsawLauncherActor() :
	ALauncherActor{}
{
	SetCooldownSeconds(2.f);
}
