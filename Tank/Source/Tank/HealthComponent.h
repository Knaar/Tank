#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStructs.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANK_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT(UHealthComponent,FOnDie)
	DECLARE_EVENT_OneParam(UHealthComponent, FOnHealthChanged, float);



public:

	FOnDie OnDie;
	FOnHealthChanged OnDamaged;


	void TakeDamage(FDamageData DamageData);
	float GetHealth()const;
	float GetHealthState()const;
	void AddHealth(float AditionalHealthValue);


protected:
	virtual void BeginPlay()override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Values")
		float MaxHealth = 25;

	UPROPERTY()
		float CurrentHealth;
		
};
