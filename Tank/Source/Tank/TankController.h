// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API ATankController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void SetupInputComponent()override;

	UPROPERTY()
	class ATankPawn* TankPawn;

	virtual void SetPawn(class APawn* InPawn)override;
protected:
	UFUNCTION()
	void MoveForward(float Value);
	void MoveRight(float Value);
};
