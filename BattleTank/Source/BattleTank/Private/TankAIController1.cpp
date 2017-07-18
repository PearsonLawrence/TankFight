// Fill out your copyright notice in the Description page of Project Settings.

//#include "public/TankAIController1.h"


#include "../Public/TankAIController1.h"
#include "Engine/World.h"
#include "../Public/TankAimingComponent.h"
#include "GameFramework/Actor.h"
#include "../Public/TankPawn.h"
void ATankAIController1::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATankAIController1::SetPawn(APawn * InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		auto PossessedTank = Cast<ATankPawn>(InPawn);
		if (!ensure(PossessedTank)) { return; }


		PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankAIController1::OnPossedTankDeath);
		//Subscribe our local method to the tank's death event
	}
}

void ATankAIController1::OnPossedTankDeath()
{
	UE_LOG(LogTemp, Warning, TEXT("Dead"));
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

	if (AimingComponent->GetFiringState() == EFiringStatus::Locked)
	{
		AimingComponent->Fire();
	}
}

