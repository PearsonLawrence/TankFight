// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Projectile.generated.h"

UCLASS()
class BATTLETANK_API AProjectile : public AActor
{
	GENERATED_BODY()
	
private:	
	// Sets default values for this actor's properties

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* otherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float DestroyDelay = 10.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float DamageAmount = 20.0f;

		void OnTimerExpire();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UProjectileMovementComponent* ProjectileMovement;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* CollisionMesh = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UParticleSystemComponent* PS = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Components")
    UParticleSystemComponent* ImpactBlast = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	URadialForceComponent* ExplosionForce;

public:	
	// Called every frame
	AProjectile();
	void LaunchProjectile(float speed);
	
};
