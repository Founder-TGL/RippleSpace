// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cards.generated.h"

UENUM(BlueprintType)
enum class EUpgradeType : uint8
{
    Damage,
    FireRate,
    BounceCount,
    ProjectileSpeed,
    MaxHealth,
    ShipSpeed
};

USTRUCT(BlueprintType)
struct FCardData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EUpgradeType Type;
};