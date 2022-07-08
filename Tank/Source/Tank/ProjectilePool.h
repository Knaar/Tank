// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectilePool.generated.h"

class AProjectile;
UCLASS()
class TANK_API AProjectilePool : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectilePool();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	int32 PoolCapacity=10;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	TSubclassOf<AProjectile> ProjectileClass;

	TArray<AProjectile*> ProjectilesArray;

	virtual void BeginPlay() override;

	void GetProjectile(FVector SpawnLocation, FRotator SpawnRotation);

	void SpawnProjectile(FVector SpawnLocation, FRotator SpawnRotation, bool bIsActive = false);
	
	void InitialisePool();

	bool bHaveActiveProjectile = false;



};
