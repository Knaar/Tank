// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameStructs.h"
#include "DamageTaker.h"
#include "GameFramework/Pawn.h"
#include "MachinePawn.generated.h"

UCLASS()
class TANK_API AMachinePawn : public APawn
{
	GENERATED_BODY()

public:
	AMachinePawn();

	UPROPERTY()
	class ACannon* Cannon;


	void Fire();
	void FireSpecial();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void Die();


};