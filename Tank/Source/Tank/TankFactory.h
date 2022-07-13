// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "DamageTaker.h"
#include "TankFactory.generated.h"

UCLASS()
class TANK_API ATankFactory : public AActor,public IDamageTaker
{
	GENERATED_BODY()
	
public:	
	
	ATankFactory();

	UFUNCTION()
	virtual void TakeDamage(FDamageData DamageData)override;

protected:
	virtual void BeginPlay()override;

	void SpawnTank();

	UFUNCTION()
	void Die();

	UFUNCTION()
	void DamageTaked(float DamageValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* BuildingMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* BoxCollider;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* TankSpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	TSubclassOf<class ATankPawn> SpawnTankClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	float SpawnTankRate=2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TArray<ATargetPoint*> TankWayPoints;



};
