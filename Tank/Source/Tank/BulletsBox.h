// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletsBox.generated.h"

UCLASS()
class TANK_API ABulletsBox : public AActor
{
	GENERATED_BODY()
	
public:	
	ABulletsBox();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		class UStaticMeshComponent* BulletBoxMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Category")
	int Capacity=50;


	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
