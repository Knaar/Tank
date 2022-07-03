// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankController.h"
#include "TankPawn.generated.h"


class ACannon;
UCLASS()
class TANK_API ATankPawn : public APawn
{
	GENERATED_BODY()

public:
	ATankPawn();

	void MoveForward(float Value);
	void MoveRight(float Value);
	void RotateRight(float Value);

	void Fire();
	void FireSpecial();
	void SwapWeapon();


	virtual void Tick(float DeltaSeconds)override;
	virtual void BeginPlay()override;

	void SetupCannon(TSubclassOf<ACannon>NewCannonClass);
	void SetBullets(int bullets);

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* TurretMesh;

	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class USpringArmComponent* SpringArm;
	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> SecondaryCannonClass;

	UPROPERTY()
	ACannon* Cannon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed=700.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float RotationSpeed=100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float InterpolationKey = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float RotateInterpolationKey = 0.1f;

	UPROPERTY()
	class ATankController* TankController;

	
private:
	float TargetAxisForwardValue=0.0f;
	float TargetAxisRightValue = 0.0f;

	float CurrentMoveAxisValue = 0.0f;
	float CurrentRotateAxisValue = 0.0f;

	float TargetAxisRotationValue = 0.0f;
	bool bMainWeapon = true;
};
