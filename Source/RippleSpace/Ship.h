	// Fill out your copyright notice in the Description page of Project Settings.

	#pragma once

	#include "CoreMinimal.h"
	#include "UObject/Object.h"
	#include "Ship.generated.h"


	UENUM(BlueprintType)
	enum class EShipClass : uint8
	{
		Fighter,
		Bomber,
		Corvette,
		Frigate,
		Cruiser,
		Battleship
	};
		
	UCLASS()
	class RIPPLESPACE_API UShip : public UObject
	{
		GENERATED_BODY()

	private:

		/*-----------*/

		FString ShipName;
		EShipClass shipClass;
		UPROPERTY(VisibleAnywhere)
		TObjectPtr<UStaticMeshComponent> MeshComponent;
		UStaticMesh* Mesh;


		/*-----------*/
		FVector Position;


		/*-----------*/


		float maxForwardSpeed;
		float maxRollSpeed;
		float maxPitchSpeed;
		float maxYawSpeed;

		float baseMaxForwardSpeed;
		float baseMaxRollSpeed;
		float baseMaxPitchSpeed;
		float baseMaxYawSpeed;


		int32 maxHealth;
		int32 baseMaxHealth;


		int32 MaxShield;
		int32 baseMaxShield;

		int32 ShieldRechargeRate;
		int32 baseShieldRechargeRate;

		/*-----------*/

		float HealthMultiplier;
		int32 HealthAdditional;

		float ShieldMultiplier;
		int32 ShieldAdditional;

		float ShieldRechargeRateMultiplier;

		float TotalSpeedMultiplier;
		float ForwardSpeedMultiplier;

		float DamageMultiplier;
		float DamageAdditional;

		/*-----------*/


		int32 throttle;
		float Speed;


		int32 health;
		int32 shield;


		/*--------------------------*/

	
	public:	
		// Sets default values for this actor's properties
		UShip();
		UShip(const FString& name, EShipClass shipClass,
			TObjectPtr<UStaticMeshComponent> MeshComponent, FVector Position,
			float maxForwardSpeed, float maxRollSpeed,
			float maxPitchSpeed, int32 maxHealth, int32 MaxShield, int32 ShieldRechargeRate);
		~UShip();

	protected:
		// Called when the game starts or when spawned
		//virtual void BeginPlay() override;

	public:	
		// Called every frame
		//virtual void Tick(float DeltaTime) override;

		/*-----------*/
		void setThrottle(int32 newThrottle) { this->throttle = newThrottle; }
		void setSpeed(float newSpeed) { this->Speed = newSpeed; }

		/*-----------*/

		void setMaxForwardSpeed(float newMaxForwardSpeed) { this->maxForwardSpeed = newMaxForwardSpeed; }
		void setMaxRollSpeed(float newMaxRollSpeed) { this->maxRollSpeed = newMaxRollSpeed; }
		void setMaxPitchSpeed(float newMaxPitchSpeed) { this->maxPitchSpeed = newMaxPitchSpeed; }
		void setMaxYawSpeed(float newMaxYawSpeed) { this->maxYawSpeed = newMaxYawSpeed; }

		/*-----------*/

		void setMaxHealth(int32 newMaxHealth) { this->maxHealth = newMaxHealth; }
		void setMaxShield(int32 newMaxShield) { this->MaxShield = newMaxShield; }
		void setShieldRechargeRate(int32 NewShieldRechargeRate) { this->ShieldRechargeRate = NewShieldRechargeRate; }

		/*-----------*/

		void setHealth(int32 newHealth) { this->health = newHealth; }
		void setShield(int32 newShield) { this->shield = newShield; }
		void setPosition(FVector newPosition) { this->Position = newPosition; }
		void setShipName(FString newShipName) { this->ShipName = newShipName; }
		void setShipClass(EShipClass newShipClass) { this->shipClass = newShipClass; }
		void setMeshComponent(TObjectPtr<UStaticMeshComponent> newMeshComponent) { this->MeshComponent = newMeshComponent; }

		/*-----------*/

		void setMesh(UStaticMesh* newMesh) { this->Mesh = newMesh; }

		/*-----------*/

		void setBaseMaxForwardSpeed(float newBaseMaxForwardSpeed) { this->baseMaxForwardSpeed = newBaseMaxForwardSpeed; }
		void setBaseMaxRollSpeed(float newBaseMaxRollSpeed) { this->baseMaxRollSpeed = newBaseMaxRollSpeed; }
		void setBaseMaxPitchSpeed(float newBaseMaxPitchSpeed) { this->baseMaxPitchSpeed = newBaseMaxPitchSpeed; }
		void setBaseMaxYawSpeed(float newBaseMaxYawSpeed) { this->baseMaxYawSpeed = newBaseMaxYawSpeed; }

		/*-----------*/

		void setBaseMaxHealth(int32 newBaseMaxHealth) { this->baseMaxHealth = newBaseMaxHealth; }
		void setBaseMaxShield(int32 newBaseMaxShield) { this->baseMaxShield = newBaseMaxShield; }
		void setBaseShieldRechargeRate(int32 newBaseShieldRechargeRate) { this->baseShieldRechargeRate = newBaseShieldRechargeRate; }

	
		/*-----------*/

		void setHealthMultiplier(float newHealthMultiplier) { this->HealthMultiplier = newHealthMultiplier; }
		void setHealthAdditional(float newHealthAdditional) { this->HealthAdditional = newHealthAdditional; }

		void setShieldMultiplier(float newShieldMultiplier) { this->ShieldMultiplier = newShieldMultiplier; }
		void setShieldAdditional(float newShieldAdditional) { this->ShieldAdditional = newShieldAdditional; }

		void setShieldRechargeRateMultiplier(float newShieldRechargeRateMultiplier) { this->ShieldRechargeRateMultiplier = newShieldRechargeRateMultiplier; }

		void setTotalSpeedMultiplier(float newTotalSpeedMultiplier) { this->TotalSpeedMultiplier = newTotalSpeedMultiplier; }
		void setForwardSpeedMultiplier(float newForwardSpeedMultiplier) { this->ForwardSpeedMultiplier = newForwardSpeedMultiplier; }

		void setDamageMultiplier(float newDamageMultiplier) { this->DamageMultiplier = newDamageMultiplier; }
		void setDamageAdditional(int32 newDamageAdditional) { this->DamageAdditional = newDamageAdditional; }
		/*-----------*/

		void addHealthMultiplier(float Value) { HealthMultiplier += Value; }
		void addHealthAdditional(float Value){HealthAdditional += Value;}

		void addShieldMultiplier(float Value){ShieldMultiplier += Value;}
		void addShieldAdditional(float Value){ShieldAdditional += Value;}

		void addShieldRechargeRateMultiplier(float Value){ShieldRechargeRateMultiplier += Value;}

		void addTotalSpeedMultiplier(float Value){TotalSpeedMultiplier += Value;}
		void addForwardSpeedMultiplier(float Value){ForwardSpeedMultiplier += Value;}

		void addDamageMultiplier(float Value){DamageMultiplier += Value;}
		void addDamageAdditional(float Value){DamageAdditional += Value;}


		/*--------------------------*/
	
		int32 getThrottle() const { return throttle; }
		float getSpeed() const { return Speed; }

		/*-----------*/


		int32 getMaxHealth() const { return maxHealth; }
		int32 getMaxShield() const { return MaxShield; }

		/*-----------*/


		int32 getHealth() const { return health; }
		int32 getShield() const { return shield; }
		FVector getPosition() const { return Position; }
		FString getShipName() const { return ShipName; }
		EShipClass getShipClass() const { return shipClass; }
		TObjectPtr<UStaticMeshComponent> getMeshComponent() const { return MeshComponent; }
		UStaticMesh* getMesh() const { return Mesh; }

		/*-----------*/


		float getMaxForwardSpeed() const { return maxForwardSpeed; }
		float getMaxRollSpeed() const { return maxRollSpeed; }
		float getMaxPitchSpeed() const { return maxPitchSpeed; }
		float getMaxYawSpeed() const { return maxYawSpeed; }

		/*-----------*/


		float getBaseMaxForwardSpeed() const { return baseMaxForwardSpeed; }
		float getBaseMaxRollSpeed() const { return baseMaxRollSpeed; }
		float getBaseMaxPitchSpeed() const { return baseMaxPitchSpeed; }
		float getBaseMaxYawSpeed() const { return baseMaxYawSpeed; }
		float getBaseMaxHealth() const { return baseMaxHealth; }
		float getBaseMaxShield() const { return baseMaxShield; }
		float getBaseShieldRechargeRate() const { return baseShieldRechargeRate; }

		/*-----------*/


	};

