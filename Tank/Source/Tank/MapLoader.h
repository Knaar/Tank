// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/BoxComponent.h"
#include "../../../../../UE_5.0/Engine/Source/Runtime/Engine/Classes/Components/AudioComponent.h"
#include "MapLoader.generated.h"

UCLASS()
class TANK_API AMapLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	AMapLoader();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelLoadParams")
	FName LoadLevelName;

	void SetIsActivated(bool NewIsActivated);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelLoadParams")
	bool IsActivated = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* TriggerCollider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UPointLightComponent* ActivatedLight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UPointLightComponent* DeactivatedLight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UAudioComponent* AudioComponent;

	

	

	

	virtual void BeginPlay()override;

	void SetActiveLights();

	UFUNCTION()
	void OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor*	OtherActor,	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void Teleport();
};
