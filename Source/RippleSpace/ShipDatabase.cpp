// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipDatabase.h"
#include "Ship.h"

UShip* ShipDatabase::Fighter_01() {
	UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

	Ship->setShipName("TinkerBell Fighter");
	Ship->setShipClass(EShipClass::Fighter);

	UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
		nullptr,
		TEXT("/Game/Assets/Models/Ships/Fighter/Fighter_01.Fighter_01")
	);

	if (ShipMesh)
	{
		Ship->setMesh(ShipMesh);
	}

	return Ship;
}

UShip* ShipDatabase::Fighter_02() {
	UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

	Ship->setShipName("TinkerBell Fighter");
	Ship->setShipClass(EShipClass::Fighter);

	UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
		nullptr,
		TEXT("/Game/Assets/Models/Ships/Fighter/Fighter_02.Fighter_02")
	);

	if (ShipMesh)
	{
		Ship->setMesh(ShipMesh);
	}

	return Ship;
}

UShip* ShipDatabase::Bomber_01() {
	UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

	Ship->setShipName("TinkerBell Fighter");
	Ship->setShipClass(EShipClass::Fighter);

	UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
		nullptr,
		TEXT("/Game/Assets/Models/Ships/Bomber/Bomber_01.Bomber_01")
	);

	if (ShipMesh)
	{
		Ship->setMesh(ShipMesh);
	}

	return Ship;
}

UShip* ShipDatabase::Bomber_02() {
	UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

	Ship->setShipName("TinkerBell Fighter");
	Ship->setShipClass(EShipClass::Fighter);

	UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
		nullptr,
		TEXT("/Game/Assets/Models/Ships/Bomber/Bomber_02.Bomber_02")
	);

	if (ShipMesh)
	{
		Ship->setMesh(ShipMesh);
	}

	return Ship;
}

UShip* ShipDatabase::Bomber_03() {
	UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

	Ship->setShipName("TinkerBell Fighter");
	Ship->setShipClass(EShipClass::Fighter);

	UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
		nullptr,
		TEXT("/Game/Assets/Models/Ships/Bomber/Bomber_03.Bomber_03")
	);

	if (ShipMesh)
	{
		Ship->setMesh(ShipMesh);
	}

	return Ship;
}

UShip* ShipDatabase::Bomber_04() {
	UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

	Ship->setShipName("TinkerBell Fighter");
	Ship->setShipClass(EShipClass::Fighter);

	UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
		nullptr,
		TEXT("/Game/Assets/Models/Ships/Bomber/Bomber_04.Bomber_04")
	);

	if (ShipMesh)
	{
		Ship->setMesh(ShipMesh);
	}

	return Ship;
}

UShip* ShipDatabase::Corvette_01() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Corvette 01");
    Ship->setShipClass(EShipClass::Corvette);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Corvette/Corvette_01.Corvette_01")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Corvette_02() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Corvette 02");
    Ship->setShipClass(EShipClass::Corvette);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Corvette/Corvette_02.Corvette_02")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Corvette_03() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Corvette 03");
    Ship->setShipClass(EShipClass::Corvette);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Corvette/Corvette_03.Corvette_03")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Corvette_04() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Corvette 04");
    Ship->setShipClass(EShipClass::Corvette);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Corvette/Corvette_04.Corvette_04")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Frigate_01() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Frigate 01");
    Ship->setShipClass(EShipClass::Frigate);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Frigate/Frigate_01.Frigate_01")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Frigate_02() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Frigate 02");
    Ship->setShipClass(EShipClass::Frigate);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Frigate/Frigate_02.Frigate_02")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Frigate_03() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Frigate 03");
    Ship->setShipClass(EShipClass::Frigate);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Frigate/Frigate_03.Frigate_03")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Frigate_04() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Frigate 04");
    Ship->setShipClass(EShipClass::Frigate);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Frigate/Frigate_04.Frigate_04")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Cruiser_01() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Cruiser 01");
    Ship->setShipClass(EShipClass::Cruiser);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Cruiser/Cruiser_01.Cruiser_01")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Cruiser_02() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Cruiser 02");
    Ship->setShipClass(EShipClass::Cruiser);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Cruiser/Cruiser_02.Cruiser_02")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::Cruiser_03() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("Cruiser 03");
    Ship->setShipClass(EShipClass::Cruiser);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/Cruiser/Cruiser_03.Cruiser_03")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::BattleShip_01() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("BattleShip 01");
    Ship->setShipClass(EShipClass::Battleship);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/BattleShip/BattleShip_01.BattleShip_01")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::BattleShip_02() {
    UShip* Ship = NewObject<UShip>();

    Ship->setBaseMaxHealth(100);
    Ship->setBaseMaxShield(100);
    Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
    Ship->setBaseMaxRollSpeed(100);
    Ship->setBaseMaxPitchSpeed(100);
    Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getBaseMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getBaseMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getBaseMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getBaseMaxYawSpeed());

    Ship->setShipName("BattleShip 02");
    Ship->setShipClass(EShipClass::Battleship);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/BattleShip/BattleShip_02.BattleShip_02")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}

UShip* ShipDatabase::BattleShip_03() {
    UShip* Ship = NewObject<UShip>();


	Ship->setBaseMaxHealth(100);
	Ship->setBaseMaxShield(100);
	Ship->setBaseShieldRechargeRate(5);

    Ship->setBaseMaxForwardSpeed(500);
	Ship->setBaseMaxRollSpeed(100);
	Ship->setBaseMaxPitchSpeed(100);
	Ship->setBaseMaxYawSpeed(100);

    Ship->setMaxHealth(Ship->getBaseMaxHealth());
    Ship->setMaxShield(Ship->getBaseMaxShield());
    Ship->setShieldRechargeRate(Ship->getBaseShieldRechargeRate());

    Ship->setHealth(Ship->getMaxHealth());
    Ship->setShield(Ship->getMaxShield());

    Ship->setMaxForwardSpeed(Ship->getMaxForwardSpeed());
    Ship->setMaxRollSpeed(Ship->getMaxRollSpeed());
    Ship->setMaxPitchSpeed(Ship->getMaxPitchSpeed());
    Ship->setMaxYawSpeed(Ship->getMaxYawSpeed());

    Ship->setShipName("BattleShip 03");
    Ship->setShipClass(EShipClass::Battleship);

    UStaticMesh* ShipMesh = LoadObject<UStaticMesh>(
        nullptr,
        TEXT("/Game/Assets/Models/Ships/BattleShip/BattleShip_03.BattleShip_03")
    );

    if (ShipMesh)
    {
        Ship->setMesh(ShipMesh);
    }

    return Ship;
}   