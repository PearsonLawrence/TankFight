// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "../Public/Projectile.h"
#include "TankAimingComponent.generated.h"

class AProjectile;

UENUM()
enum class EFiringStatus : uint8
{
	Locked,
	Reloading,
	Aiming,
	
};

class UTankBarrel;
class UTankTurret;

//Holds barrel's properties and Elevate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()



public:	
	// Called every frame
	UTankAimingComponent();

	UPROPERTY(EditAnywhere, Category = "Setup")
		TSubclassOf<AProjectile> PorjectileBP;



	UPROPERTY(EditAnywhere, Category = "Firing")
		float ReloadTimeInSeconds = 3;


	void AimAt(FVector HitLocation);


	UFUNCTION(BlueprintCallable, Category = "Input")
		void Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet);

	UFUNCTION(BlueprintCallable, Category = "Firing")
		void Fire();

	EFiringStatus GetFiringState() const;
protected:
	UPROPERTY(BlueprintReadOnly, Category = "State")
		EFiringStatus FiringState = EFiringStatus::Reloading;


private:
	
	UPROPERTY(EditAnywhere, Category = "Firing")
		float LaunchSpeed = 4000000; // sensible starting value

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
		
	// Sets default values for this component's properties

	bool IsBarrelMoving();

	void MoveBarrelTowards(FVector AimRotation);
	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;

	// Sets default values for this pawn's properties
	FVector AimDirection;


	double LastFireTime = 0;

};
