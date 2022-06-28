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
	ATankController();
	virtual void SetupInputComponent() override;

	UPROPERTY()
	class ATankPawn* TankPawn;

	UPROPERTY()
	FVector MousePos;

	FVector GetMousePosition() { return MousePos; };

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetPawn(APawn* InPawn)override;
protected:
	//virtual void BeginPlay()override;
	UFUNCTION()
	void MoveForward(float Value);
	UFUNCTION()
	void MoveRight(float Value);
	UFUNCTION()
	void RotateRight(float Value);
};
