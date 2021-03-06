// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "Engine/World.h"
#include "TankAimingComponent.h"
#include "GameFramework/Actor.h"
#include "../Public/TankPawn.h"

void ATankPlayerController::SetPawn(APawn * InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		auto PossessedTank = Cast<ATankPawn>(InPawn);
		if (!ensure(PossessedTank)) { return; }


		PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankPlayerController::OnPossedTankDeath);
		//Subscribe our local method to the tank's death event
	}
}

void ATankPlayerController::OnPossedTankDeath()
{
	StartSpectatingOnly();
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();


	auto AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();

	
		FoundAimingComponent(AimingComponent);
	
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}


void ATankPlayerController::AimTowardsCrosshair()
{
	auto ControlledTank = GetPawn();
	if (!ensure(ControlledTank)) { return; }
	auto TankAimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();

	if (!ensure(TankAimingComponent)) { return; }

	FVector HitLocation; //Out
	bool bGotHitLocation = GetSightRayHitLocation(HitLocation);

	if (bGotHitLocation) // Has "side effect", is going to line trace
	{
		
			TankAimingComponent->AimAt(HitLocation);
		
		
		   // tell controlled tank to aim at this point
	}


}


// Get world location if linetrace through crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& OutHitlocation) const
{
    // Find the crosshair position
	int32 ViewportSizeX, ViewportSizeY;

	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
	FVector LookDirection;
	if(GetLookDirection(ScreenLocation, LookDirection))
	{
		// Line trace along that look direction, and see what we hit (up to max range)

			return GetLookVectorHitLocation(LookDirection, OutHitlocation);
		
	}
	
	return false;
	// "DeProject" the screen position of the crosshair to a world direction
	
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& OutHitlocation) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(
			HitResult, 
			StartLocation, 
			EndLocation,
			ECollisionChannel::ECC_Camera)
		)
	{
		OutHitlocation = HitResult.Location;
	
		return true;
	}
	    //FVector nan = GetOwner()->GetActorRotation().Vector;
		OutHitlocation = FVector(0);
		return false;
	


}


bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector CameraWorldLocation; // to be discarded

	return DeprojectScreenPositionToWorld(
		ScreenLocation.X,
		ScreenLocation.Y,
		CameraWorldLocation,
		LookDirection);

}