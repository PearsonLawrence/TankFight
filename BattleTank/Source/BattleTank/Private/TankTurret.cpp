// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankTurret.h"
#include "Engine/World.h"



void UTankTurret::RotateTurret(float Relativespeed)
{

	Relativespeed = FMath::Clamp<float>(Relativespeed, -1, +1);

	auto RotationChange = Relativespeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewRotation = RelativeRotation.Yaw + RotationChange; 

	SetRelativeRotation(FRotator(0, RawNewRotation, 0));
}
