// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


#include "Projectile.generated.h"

class AShip_entity;

UCLASS()
class RIPPLESPACE_API AProjectile : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")	
	UProjectileMovementComponent* ProjectileMovement;
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

	UPROPERTY()
	AShip_entity* OwnerShip = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UStaticMeshComponent* getMeshComponent() { return MeshComponent; }
	void setMeshComponent(UStaticMeshComponent* meshComponent) { MeshComponent = meshComponent; }
	void SetOwnerShip(AShip_entity* NewOwner){ OwnerShip = NewOwner; }

	//UFUNCTION()
	/*void OnHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	);*/

	void SetDirection(FVector NewDirection)
	{
		Direction = NewDirection.GetSafeNormal();

		SetActorRotation(
			Direction.Rotation()
		);
	}

	void setDamage(int32 newDamage) { this->Damage = newDamage; }

private: 
	FVector Direction;
	float Speed = 5000.f;
	int32 RemainingBounces = 2;
	int32 Damage = 5;

};
