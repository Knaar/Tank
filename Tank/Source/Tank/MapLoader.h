// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/BoxComponent.h"
#include "MapLoader.generated.h"

UCLASS()
class TANK_API AMapLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	AMapLoader();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* TriggerCollider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UPointLightComponent* ActivatedLight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UPointLightComponent* DeactivatedLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelLoadParams")
	FName LoadLevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelLoadParams")
	bool IsActivated=false;

	void SetIsActivated(bool NewIsActivated);

	virtual void BeginPlay()override;

	void SetActiveLights();

	UFUNCTION()
		void OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor*	OtherActor,	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
