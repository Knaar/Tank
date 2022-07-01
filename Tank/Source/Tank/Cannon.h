// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameStructs.h"
#include "TankPawn.h"
#include "Cannon.generated.h"


UCLASS()
class TANK_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ACannon();
	virtual void Tick(float DeltaSeconds)override;
	
	void Fire();
	
	void FireSpecial();
	void ShootCast();
	void ShootRelease();
	void Reload();
	void SwapWeapon();

	int bulletsInMagasine = 100;
	
protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Components")
	class UStaticMeshComponent* CannonMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* ProjectileSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	ECannonType CannonType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float ReloadTime=1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float FireRate = 1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	int NumOfAutoShoots=3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float FireRange = 4000.0f;

	int SomeIterator = 0;

	FTimerHandle ReloadTimer;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf <class AProjectile> ProjectileClass;

	UPROPERTY()
	ATankPawn* TankPawn;

private:
	bool bCanFire = true;
	
};
