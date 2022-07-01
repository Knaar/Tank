#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmmoBox.generated.h"

UCLASS()
class TANK_API AAmmoBox : public AActor
{
	GENERATED_BODY()
	
public:	
	AAmmoBox();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component");
	class UStaticMeshComponent* AmmoMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo");
	TSubclassOf<class ACannon> CannonClass;

	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
