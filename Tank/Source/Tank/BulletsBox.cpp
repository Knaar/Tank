#include "BulletsBox.h"
#include "TankPawn.h"

ABulletsBox::ABulletsBox()
{
    USceneComponent* BulletsSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = BulletsSceneComponent;

    BulletBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletBoxMesh"));
    BulletBoxMesh->SetupAttachment(BulletsSceneComponent);
    BulletBoxMesh->OnComponentBeginOverlap.AddDynamic(this, &ABulletsBox::OnMeshOverlapBegin);
    BulletBoxMesh->SetCollisionProfileName(FName("OverlapAll"));
    BulletBoxMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    BulletBoxMesh->SetGenerateOverlapEvents(true);
}

void ABulletsBox::OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ATankPawn* TankPawn = Cast<ATankPawn>(OtherActor);
	if (TankPawn) {
		TankPawn->SetBullets(Capacity);
		Destroy();
	}
}

