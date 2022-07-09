// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameStructs.h"
#include "DamageTaker.h"
#include "GameFramework/Pawn.h"
#include "Components/AudioComponent.h"
#include "HealthComponent.h"
#include "MachinePawn.generated.h"

UCLASS()
class TANK_API AMachinePawn : public APawn, public IDamageTaker
{
	GENERATED_BODY()

public:
	AMachinePawn();

	UPROPERTY()
	class ACannon* Cannon;


	void Fire();
	void FireSpecial();

	UFUNCTION()
	virtual void TakeDamage(FDamageData DamageData);

	UFUNCTION()
	void DamageTaked(float DamageValue);
protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffect;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffectDamaged;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void Die();


};
