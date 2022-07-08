// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TANK_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AProjectile();

	void Start();
	void Deactivate();
	void Move();

	UFUNCTION()
	void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	bool bIsActivation;

protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Components")
	class UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float moveSpeed =100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float moveRate = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float deactivateTime = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float Damage = 10.0f;

	FTimerHandle MovieTimer;
	FTimerHandle DeactivateTimer;

	
};
