// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Cannon.h"
#include "Turret.generated.h"

UCLASS()
class TANK_API ATurret : public AActor
{
	GENERATED_BODY()

protected:
	
	ATurret();
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Components")
	UStaticMeshComponent *BodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* TerretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UArrowComponent* CannonSetupPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UBoxComponent* HitCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY()
	ACannon *Cannon;

	UPROPERTY()
	ATankPawn* TankPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetInRange=1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float TargetingSpeed =0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float TargetRate =0.005f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float Accurency=10;
};
