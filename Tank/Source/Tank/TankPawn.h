// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameStructs.h"
#include "DamageTaker.h"
#include "MachinePawn.h"
#include "TankPawn.generated.h"

class UStaticMeshComponent;
class ACannon;
class ATargetPoint;
UCLASS()
class TANK_API ATankPawn : public AMachinePawn
{
	GENERATED_BODY()

public:
	ATankPawn();

	void MoveForward(float Value);
	void MoveRight(float Value);
	void RotateRight(float Value);

	
	void SwapWeapon();


	virtual void Tick(float DeltaSeconds)override;
	

	void SetupCannon(TSubclassOf<ACannon>NewCannonClass);
	void SetBullets(int bullets);

	UFUNCTION()
	void SetPatrollingPoints(TArray<ATargetPoint*> NewPatrollingPoint);

	UFUNCTION()
	TArray<FVector> GetPatrolligPoints();

	UFUNCTION()
	float GetAccurency(){return MovementAccurency;}

	UFUNCTION()
	FVector GetTurretForwardVector();

	UFUNCTION()
	void RotateTurretTo(FVector TargetPosution);

	FVector GetEyesPosition();

protected:
	virtual void BeginPlay()override;

	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* CannonSetupPoint;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class USpringArmComponent* SpringArm;
	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UCameraComponent* Camera;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UBoxComponent *HitCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> SecondaryCannonClass;

	

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


	//AI components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components",Meta = (MakeEditWidget=true))
	TArray<ATargetPoint*> PatrollingPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components")
	float MovementAccurency =30.0f;

private:
	float TargetAxisForwardValue=0.0f;
	float TargetAxisRightValue = 0.0f;

	float CurrentMoveAxisValue = 0.0f;
	float CurrentRotateAxisValue = 0.0f;

	float TargetAxisRotationValue = 0.0f;
	bool bMainWeapon = true;


};
