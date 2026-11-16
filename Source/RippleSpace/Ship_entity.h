// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


#include "Ship.h"
#include "Blueprint/UserWidget.h"

#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "Projectile.h"
#include "Ship_entity.generated.h"



UCLASS()
class RIPPLESPACE_API AShip_entity : public APawn
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	UShip* ship;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* CapsuleComponent;
	UPROPERTY(VisibleAnywhere)
	UArrowComponent* ArrowComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCameraComponent* CameraComponent;


public:
	AShip_entity();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TSubclassOf<AProjectile> ProjectileClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void setShip(UShip* newShip);
	void setMeshComponent(UStaticMeshComponent* newMeshComponent) { ship->setMeshComponent(newMeshComponent); }


private:
	float PitchInput = 0.f;
	float YawInput = 0.f;
	float RollInput = 0.f;

	float PitchRate = 50.f;
	float YawRate = 50.f;
	float RollRate = 50.f;

	float ThrottleAcceleration = 25.f;
	
	bool CameraActiveControls = false;
	float CameraRotateSpeed = 1.f;

	UPROPERTY(EditAnywhere)
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* IncreaseThrust_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* DecreaseThrust_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* PitchUp_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* PitchDown_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* YawRight_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* YawLeft_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* RollRight_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* RollLeft_IA;


	/*--------------------*/

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CameraDistance_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ActivateCameraControls_IA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CameraMove_IA;

	/*--------------------*/

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* FireMain_IA;

public: 

	void IncreaseThrottle(const FInputActionValue& Value);
	void DecreaseThrottle(const FInputActionValue& Value);

	void PitchUp(const FInputActionValue& Value);
	void PitchDown(const FInputActionValue& Value);
	void StopPitch(const FInputActionValue& Value);

	void YawRight(const FInputActionValue& Value);
	void YawLeft(const FInputActionValue& Value);
	void StopYaw(const FInputActionValue& Value);

	void RollRight(const FInputActionValue& Value);
	void RollLeft(const FInputActionValue& Value);
	void StopRoll(const FInputActionValue& Value);

	/*---------*/

	void ChangeCameraDistance(const FInputActionValue& Value);

	void ActivateCameraControls(const FInputActionValue& Value);
	void DeactivateCameraControls(const FInputActionValue& Value);

	void CameraMove(const FInputActionValue& Value);

	/*---------*/

	void FireMain(const FInputActionValue& Value);

private:

	

	UPROPERTY()
	UUserWidget* ActiveLevelUpWidget;


	int32 XP = 0;
	int32 XPNeeded = 100;

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> LevelUpWidgetClass;


	void AddXP(int32 ammountAdded) {
		XP += ammountAdded;

		while (XP >= XPNeeded)
		{
			XP -= XPNeeded;

			LevelUp();
		}
	}
	
	void LevelUp();

};
