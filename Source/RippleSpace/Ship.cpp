	// Fill out your copyright notice in the Description page of Project Settings.


	#include "Ship.h"

	UShip::~UShip()
	{
		// Cleanup code if needed
	}

	UShip::UShip(const FString& name, EShipClass shipClass,
		TObjectPtr<UStaticMeshComponent> MeshComponent, FVector Position,
		float maxForwardSpeed, float maxRollSpeed,
		float maxPitchSpeed, int32 maxHealth, int32 MaxShield, int32 ShieldRechargeRate)
		: ShipName(name), shipClass(shipClass), MeshComponent(MeshComponent), Position(Position),
		maxForwardSpeed(maxForwardSpeed), maxRollSpeed(maxRollSpeed),
		maxPitchSpeed(maxPitchSpeed), maxHealth(maxHealth), MaxShield(MaxShield), ShieldRechargeRate(ShieldRechargeRate),
		throttle(0), Speed(0.0f), health(maxHealth), shield(MaxShield)
	{
		// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		//PrimaryActorTick.bCanEverTick = true;
	}

	// Sets default values
	UShip::UShip()
	{
	 //	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		//PrimaryActorTick.bCanEverTick = true;
	
		ShipName = TEXT("Default Ship");

		shipClass = EShipClass::Fighter; 

		MeshComponent = nullptr;

		Position = FVector::ZeroVector;

		maxForwardSpeed = 1000.0f;
		maxRollSpeed = 90.0f;
		maxPitchSpeed = 90.0f;

		maxHealth = 100;
		MaxShield = 50;
		ShieldRechargeRate = 5;

		throttle = 0;
		Speed = 0.0f;

		health = maxHealth;
		shield = MaxShield;

		HealthMultiplier = 1;
		HealthAdditional = 0;

		ShieldMultiplier = 1;
		ShieldAdditional = 0;

		ShieldRechargeRateMultiplier = 1;

		TotalSpeedMultiplier = 1;
		ForwardSpeedMultiplier = 1;

		DamageMultiplier = 1;
		DamageAdditional = 0;
	}