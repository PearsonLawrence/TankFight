// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankAimingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../Public/TankBarrel.h"
#include "../Public/TankTurret.h"
#include "Engine/World.h"


// Sets default values for this component's properties
UTankAimingComponent::UTankAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UTankAimingComponent::BeginPlay()
{
	//first fire is after initial reload
	LastFireTime = FPlatformTime::Seconds();

}

void UTankAimingComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
		if (RoundsLeft <= 0)
		{
			FiringState = EFiringStatus::OutOfAmmo;
		}
		else if (!((FPlatformTime::Seconds() - LastFireTime) > ReloadTimeInSeconds))
		{
			FiringState = EFiringStatus::Reloading;
		}
		else if (IsBarrelMoving())
		{
			FiringState = EFiringStatus::Aiming;
		}
		else
		{
			FiringState = EFiringStatus::Locked;
		}
	
	
}

EFiringStatus UTankAimingComponent::GetFiringState() const
{
	return FiringState;
}

void UTankAimingComponent::Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet)
{
	Barrel = BarrelToSet;
	Turret = TurretToSet;
}

void UTankAimingComponent::Fire()
{
		
		if (FiringState == EFiringStatus::Locked || FiringState == EFiringStatus::Aiming)
		{
			if (!ensure(Barrel && PorjectileBP)) { return; }
			//spawn projectile at socket barrel
			auto Projectile = GetWorld()->SpawnActor<AProjectile>(
				PorjectileBP,
				Barrel->GetSocketLocation(FName("Projectile")),
				Barrel->GetSocketRotation(FName("Projectile"))
				);
			Projectile->LaunchProjectile(LaunchSpeed);
			
			LastFireTime = FPlatformTime::Seconds();
			RoundsLeft--;
		}
	
}



int UTankAimingComponent::GetRoundsLeft() const
{
	return RoundsLeft;
}

void UTankAimingComponent::AimAt(FVector HitLocation)
{
	if (!ensure(Barrel) ) { return; }

	FVector OutLaunchVelocity;

	FVector StartLocation = Barrel->GetSocketLocation(FName("Projectile"));

	bool bHaveAimSolution = UGameplayStatics::SuggestProjectileVelocity
	(
		this,
		OutLaunchVelocity,
		StartLocation,
		HitLocation,
		LaunchSpeed,
		false,
		0,
		0,
		ESuggestProjVelocityTraceOption::DoNotTrace
	);

	if (bHaveAimSolution)
	{
		AimDirection = OutLaunchVelocity.GetSafeNormal();

	
		MoveBarrelTowards(AimDirection);
		
	}
	
}

bool UTankAimingComponent::IsBarrelMoving()
{
	if (!ensure(Barrel)) { return false; }
	auto BarrelForward = Barrel->GetForwardVector();
	return !BarrelForward.Equals(AimDirection,.01f);
}

void UTankAimingComponent::MoveBarrelTowards(FVector AimRotation)
{
	if (!ensure(Barrel && Turret))
	{
		return;
	}
	//Work-Out difference between current barrel rotation, and AimDirection
	auto BarrelRotator = Barrel->GetForwardVector().Rotation();
    auto AimAsRotator = AimRotation.Rotation();
	auto DeltaRotator = AimAsRotator - BarrelRotator;

	Barrel->ElevateBarrel(DeltaRotator.Pitch);
	//always yaw the shortest way
	if (FMath::Abs(DeltaRotator.Yaw) < 180)
	{
		Turret->RotateTurret(DeltaRotator.Yaw);
	}
	else
	{
		Turret->RotateTurret(-DeltaRotator.Yaw);
	}
}



