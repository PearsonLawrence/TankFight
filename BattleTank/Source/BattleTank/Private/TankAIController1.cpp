// Fill out your copyright notice in the Description page of Project Settings.

//#include "public/TankAIController1.h"


#include "../Public/TankAIController1.h"
#include "Engine/World.h"
#include "../Public/TankAimingComponent.h"
#include "GameFramework/Actor.h"

void ATankAIController1::BeginPlay()
{
	Super::BeginPlay();
	
}



void ATankAIController1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();

	if (!ensure(PlayerTank && ControlledTank)) { return; }
	
	MoveToActor(PlayerTank, AcceptanceRadius);


	auto AimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();
	AimingComponent->AimAt(PlayerTank->GetActorLocation());

	AimingComponent->Fire();
	
}
