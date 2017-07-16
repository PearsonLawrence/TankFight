// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController1.generated.h"

//class ATankPawn;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController1 : public AAIController
{
	GENERATED_BODY()
	
public:
	   void BeginPlay() override;
	   virtual void Tick(float DeltaTime) override;


private:

	UPROPERTY(Editdefaultsonly)
	float AcceptanceRadius = 3000;
	
};
