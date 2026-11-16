// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Ship_entity.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent =
		CreateDefaultSubobject<UStaticMeshComponent>(
			TEXT("Mesh"));

	RootComponent = MeshComponent;

	ProjectileMovement = 
        CreateDefaultSubobject<UProjectileMovementComponent>(
			TEXT("ProjectileMovement"));

	ProjectileMovement->UpdatedComponent = MeshComponent;

	ProjectileMovement->InitialSpeed = 5000.f;
	ProjectileMovement->MaxSpeed = 5000.f;
    

	ProjectileMovement->bRotationFollowsVelocity = true;


	MeshComponent->SetCollisionEnabled(
		ECollisionEnabled::QueryAndPhysics
	);

	MeshComponent->SetNotifyRigidBodyCollision(true);

	//MeshComponent->OnComponentHit.AddDynamic(
	//	this,
	//	&AProjectile::OnHit
	//);
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FHitResult HitResult;

    AddActorWorldOffset(
        Direction * Speed * DeltaTime,
        true,
        &HitResult
    );

    if (!HitResult.bBlockingHit)
    {
        return;
    }

    AActor* HitActor = HitResult.GetActor();

    if (!HitActor)
    {
        return;
    }

    // Ignore owner
    if (HitActor == OwnerShip)
    {
        return;
    }

    // Hit a ship
    if (Cast<AShip_entity>(HitActor))
    {
        Destroy();
        return;
    }

    // Environment bounce
    Direction = FMath::GetReflectionVector(
        Direction,
        HitResult.Normal
    ).GetSafeNormal();

    SetActorRotation(
        Direction.Rotation()
    );

    SetActorLocation(
        HitResult.ImpactPoint +
        Direction * 100.f
    );

    if (RemainingBounces <= 0)
    {
        Destroy();  
        return;
    }

    RemainingBounces--;

    Speed *= 1.1f;

    DrawDebugSphere(
        GetWorld(),
        HitResult.ImpactPoint,
        100.f,
        12,
        FColor::Red,
        false,
        5.f
    );
}

//void AProjectile::OnHit(
//    UPrimitiveComponent* HitComponent,
//    AActor* OtherActor,
//    UPrimitiveComponent* OtherComp,
//    FVector NormalImpulse,
//    const FHitResult& Hit)
//{
//
//    GEngine->AddOnScreenDebugMessage(
//        -1,
//        2.f,
//        FColor::Red,
//        TEXT("ON HIT")
//    );
//
//
//    if (!OtherActor)
//    {
//        return;
//    }
//
//    // Ignore ship that fired us
//    if (OtherActor == OwnerShip)
//    {
//        return;
//    }
//
//    // Hit another ship
//    if (AShip_entity* HitShip =
//        Cast<AShip_entity>(OtherActor))
//    {
//        UE_LOG(
//            LogTemp,
//            Warning,
//            TEXT("Hit ship")
//        );
//
//        // TODO:
//        // HitShip->ApplyDamage(...);
//
//        Destroy();
//        return;
//    }
//
//    // Environment
//    Direction =
//        FMath::GetReflectionVector(
//            Direction,
//            Hit.Normal
//        ).GetSafeNormal();
//
//    SetActorRotation(
//        Direction.Rotation()
//    );
//
//    SetActorLocation(
//        Hit.ImpactPoint +
//        Direction * 50.f
//    );
//
//    DrawDebugLine(
//        GetWorld(),
//        Hit.ImpactPoint,
//        Hit.ImpactPoint + Direction * 500.f,
//        FColor::Green,
//        false,
//        3.f,
//        0,
//        5.f
//    );
//
//    RemainingBounces--;
//
//    if (RemainingBounces <= 0)
//    {
//        Destroy();
//        return;
//    }
//    Speed *= 1.1f;
//    Damage *= 1.25f;
//
//}