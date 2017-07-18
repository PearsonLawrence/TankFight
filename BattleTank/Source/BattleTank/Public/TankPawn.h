// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "../Public/Projectile.h"
#include "TankPawn.generated.h"


UCLASS()
class BATTLETANK_API ATankPawn : public APawn
{
	GENERATED_BODY()


private:

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Health")
	   int32 CurrentHealth = StartingHealth;

public:	
	ATankPawn();
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;

};
