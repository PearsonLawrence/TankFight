// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankPawn.h"
#include "Engine/World.h"
#include "../Public/TankBarrel.h"

// Sets default values
ATankPawn::ATankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
}

float ATankPawn::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	auto DamageToApply = FMath::Clamp(DamagePoints, 0, CurrentHealth);
	CurrentHealth -= DamageToApply;
	if (CurrentHealth <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("dead"));

	}
	else
	UE_LOG(LogTemp, Warning, TEXT("DamageAmount = %f, DamageToApply = %i"), DamageAmount, DamageToApply);


	return DamageToApply;
}
