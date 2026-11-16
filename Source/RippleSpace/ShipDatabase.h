// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ship.h"

/**
 * 
 */
class RIPPLESPACE_API ShipDatabase
{
public:
    static UShip* Fighter_01();
    static UShip* Fighter_02();

    static UShip* Bomber_01();
    static UShip* Bomber_02();
    static UShip* Bomber_03();
    static UShip* Bomber_04();

    static UShip* Corvette_01();
    static UShip* Corvette_02();
    static UShip* Corvette_03();
    static UShip* Corvette_04();

    static UShip* Frigate_01();
    static UShip* Frigate_02();
    static UShip* Frigate_03();
    static UShip* Frigate_04();

    static UShip* Cruiser_01();
    static UShip* Cruiser_02();
    static UShip* Cruiser_03();

    static UShip* BattleShip_01();
    static UShip* BattleShip_02();
    static UShip* BattleShip_03();


};
