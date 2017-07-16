// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "Engine/World.h"
#include "TankAimingComponent.h"
#include "GameFramework/Actor.h"
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
	if (GetSightRayHitLocation(HitLocation)) // Has "side effect", is going to line trace
	{
		if (HitLocation != FVector(0))
		{
			TankAimingComponent->AimAt(HitLocation);
		}
		else
		{

			TankAimingComponent->AimAt(GetPawn()->GetActorForwardVector() * 30000 );

		}
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

		
			GetLookVectorHitLocation(LookDirection, OutHitlocation);
		

		
	}
	
	return true;
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
			ECollisionChannel::ECC_Visibility)
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