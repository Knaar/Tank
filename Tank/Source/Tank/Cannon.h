// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameStructs.h"
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

	int bulletsInMagasine = 10;
	
protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Components")
	class UStaticMeshComponent* CannonMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* ProjectileSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	ECannonType CannonType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float ReloadTime=1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	int FireRate = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	int NumOfAutoShoots=3;

	int SomeIterator = 0;

	FTimerHandle ReloadTimer;

private:
	bool bCanFire = true;
	
};
