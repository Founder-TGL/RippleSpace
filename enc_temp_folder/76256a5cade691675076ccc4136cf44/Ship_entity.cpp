// Fill out your copyright notice in the Description page of Project Settings.


#include "Ship_entity.h"
#include "Ship.h"
#include "ShipDatabase.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "Projectile.h"
#include "Cards.h"

#include "Engine/World.h"
// Sets default values
AShip_entity::AShip_entity()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = CapsuleComponent;
	MeshComponent->SetupAttachment(RootComponent);
	ArrowComponent->SetupAttachment(RootComponent);

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComponent);

	SpringArmComponent->TargetArmLength = 1000.0f;
	SpringArmComponent->bUsePawnControlRotation = false;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	

	CameraComponent->bUsePawnControlRotation = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	
}


// Called when the game starts or when spawned
void AShip_entity::BeginPlay()
{
	Super::BeginPlay();
	setShip(ShipDatabase::BattleShip_03());


	APlayerController* PC =
		Cast<APlayerController>(GetController());

	if (PC)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
				PC->GetLocalPlayer());

		if (Subsystem)
		{
			Subsystem->AddMappingContext(
				DefaultMappingContext,
				0);
		}
	}

	if (PC)
	{
		PC->bShowMouseCursor = true;
	}

	/*--temp test--*/

	
}

// Called every frame
void AShip_entity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// Forward movement
	ship->setSpeed(
		(ship->getThrottle() / 100.f)
		* ship->getMaxForwardSpeed()
	);
	FVector DeltaLocation =
		GetActorForwardVector() *
		ship->getSpeed() *
		DeltaTime;
	AddActorWorldOffset(DeltaLocation, true);

	// Rotation
	FRotator DeltaRotation(
		PitchInput * PitchRate * DeltaTime,
		YawInput * YawRate * DeltaTime,
		RollInput * RollRate * DeltaTime
	);

	AddActorLocalRotation(DeltaRotation);

}

// Called to bind functionality to input
void AShip_entity::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInput =
		Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedInput)
	{
		EnhancedInput->BindAction(
			IncreaseThrust_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::IncreaseThrottle);

		EnhancedInput->BindAction(
			DecreaseThrust_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::DecreaseThrottle);


		EnhancedInput->BindAction(
			PitchUp_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::PitchUp);

		EnhancedInput->BindAction(
			PitchUp_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::StopPitch);

		EnhancedInput->BindAction(
			PitchDown_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::PitchDown);

		EnhancedInput->BindAction(
			PitchDown_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::StopPitch);


		EnhancedInput->BindAction(
			YawRight_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::YawRight);

		EnhancedInput->BindAction(
			YawRight_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::StopYaw);

		EnhancedInput->BindAction(
			YawLeft_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::YawLeft);

		EnhancedInput->BindAction(
			YawLeft_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::StopYaw);


		EnhancedInput->BindAction(
			RollRight_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::RollRight);

		EnhancedInput->BindAction(
			RollRight_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::StopRoll);

		EnhancedInput->BindAction(
			RollLeft_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::RollLeft);

		EnhancedInput->BindAction(
			RollLeft_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::StopRoll);


		/*----------*/

		EnhancedInput->BindAction(
			CameraDistance_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::ChangeCameraDistance);

		EnhancedInput->BindAction(
			ActivateCameraControls_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::ActivateCameraControls);

		EnhancedInput->BindAction(
			ActivateCameraControls_IA,
			ETriggerEvent::Completed,
			this,
			&AShip_entity::DeactivateCameraControls);
		EnhancedInput->BindAction(
			CameraMove_IA,
			ETriggerEvent::Triggered,
			this,
			&AShip_entity::CameraMove);

		/*----------*/

		EnhancedInput->BindAction(
			FireMain_IA,
			ETriggerEvent::Started,
			this,
			&AShip_entity::FireMain);
	}

}

void AShip_entity::setShip(UShip* NewShip)
{
	ship = NewShip;

	if (ship && ship->getMesh())
	{
		MeshComponent->SetStaticMesh(ship->getMesh());
	}
	MeshComponent->SetRelativeScale3D(FVector(0.2f));
	MeshComponent->SetRelativeRotation(
		FRotator(0.f, 180.f, 0.f)
	);

	SpringArmComponent->SetRelativeRotation(
		FRotator(-15.f, 0.f, 0.f)
	);
	SpringArmComponent->TargetArmLength = 1500.f;

}

void AShip_entity::IncreaseThrottle(const FInputActionValue& Value)
{
	ship->setThrottle(
		FMath::Clamp(
			ship->getThrottle() + 2,
			-100,
			100
		)
	);
}

void AShip_entity::DecreaseThrottle(const FInputActionValue& Value)
{
	ship->setThrottle(
		FMath::Clamp(
			ship->getThrottle() - 2,
			-100,
			100
		)
	);
}

void AShip_entity::PitchUp(const FInputActionValue& Value) {
	PitchInput = 1.f;
}
void AShip_entity::PitchDown(const FInputActionValue& Value) {
	PitchInput = -1.f;
}
void AShip_entity::StopPitch(const FInputActionValue& Value) {
	PitchInput = 0.f;
}


void AShip_entity::YawRight(const FInputActionValue& Value) {
	YawInput = 1.f;
}
void AShip_entity::YawLeft(const FInputActionValue& Value) {
	YawInput = -1.f;
}
void AShip_entity::StopYaw(const FInputActionValue& Value) {
	YawInput = 0.f;
}


void AShip_entity::RollRight(const FInputActionValue& Value) {
	RollInput = 1.f;
}
void AShip_entity::RollLeft(const FInputActionValue& Value) {
	RollInput = -1.f;
}
void AShip_entity::StopRoll(const FInputActionValue& Value) {
	RollInput = 0.f;
}

/*--------*/

void AShip_entity::ChangeCameraDistance(const FInputActionValue& Value) {

	float additive = Value.Get<float>() * 25.f;

	if (SpringArmComponent) {
		SpringArmComponent->TargetArmLength = FMath::Clamp(
			SpringArmComponent->TargetArmLength + additive,
			1000,
			5000
		);
	}

}

void AShip_entity::ActivateCameraControls(const FInputActionValue& Value) {
	CameraActiveControls = true;

	if (APlayerController* PC =
		Cast<APlayerController>(GetController()))
	{
		PC->bShowMouseCursor = false;
		FInputModeGameOnly Mode;
		PC->SetInputMode(Mode);
	}
}

void AShip_entity::DeactivateCameraControls(const FInputActionValue& Value) {
	CameraActiveControls = false;

	if (APlayerController* PC =
		Cast<APlayerController>(GetController()))
	{
		PC->bShowMouseCursor = true;
		FInputModeGameAndUI Mode;
		PC->SetInputMode(Mode);

		PC->SetInputMode(Mode);
	}
}

void AShip_entity::CameraMove(const FInputActionValue& Value) {
	if (CameraActiveControls == true) {
		FVector2D Axis = Value.Get<FVector2d>();

		float YawInputCam = Axis.X;
		float pitchInputCam = Axis.Y;

		FRotator CurrentRotation = SpringArmComponent->GetRelativeRotation();

		CurrentRotation.Yaw += YawInputCam * CameraRotateSpeed;
		CurrentRotation.Pitch = FMath::Clamp(
			CurrentRotation.Pitch - pitchInputCam * CameraRotateSpeed,
			-80.f,
			80.f
		);

		SpringArmComponent->SetRelativeRotation(CurrentRotation);
	}
}

void AShip_entity::FireMain(const FInputActionValue& Value) {

	APlayerController* PC =
		Cast<APlayerController>(GetController());

	if (!PC)
	{
		return;
	}

	FVector WorldLocation;
	FVector WorldDirection;

	if (!PC->DeprojectMousePositionToWorld(
		WorldLocation,
		WorldDirection))
	{
		return;
	}

	FVector TraceStart = WorldLocation;
	FVector TraceEnd =
		TraceStart +
		WorldDirection * 1000000.f;

	FHitResult Hit;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	GetWorld()->LineTraceSingleByChannel(
		Hit,
		TraceStart,
		TraceEnd,
		ECC_Visibility,
		Params
	);

	FVector AimPoint =
		Hit.bBlockingHit
		? Hit.ImpactPoint
		: WorldLocation +
		WorldDirection * 20000.f;

	FVector FireDirection =
		(AimPoint - GetActorLocation())
		.GetSafeNormal();

	// Mouse ray
	//DrawDebugLine(
	//	GetWorld(),
	//	TraceStart,
	//	AimPoint,
	//	FColor::Green,
	//	false,
	//	10.1f,
	//	0,
	//	2.f
	//);

	// Ship firing solution
	//DrawDebugLine(
	//	GetWorld(),
	//	GetActorLocation(),
	//	AimPoint,
	//	FColor::Red,
	//	false,
	//	10.f,
	//	0,
	//	4.f
	//);

	DrawDebugSphere(
		GetWorld(),
		AimPoint,
		100.f,
		12,
		FColor::Yellow,
		false,
		10.f
	);


	FVector SpawnLocation =
		GetActorLocation() + GetActorForwardVector() * 500.f;

	FRotator SpawnRotation =
		FireDirection.Rotation();
	if (ProjectileClass) {
		AProjectile* Projectile =
			GetWorld()->SpawnActor<AProjectile>(
				ProjectileClass,
				SpawnLocation,
				SpawnRotation
			);
		if (Projectile)
		{
			Projectile->SetOwnerShip(this);
			Projectile->SetDirection(FireDirection);
			Projectile->getMeshComponent()->IgnoreActorWhenMoving(
				this,
				true
			);
		}
	}

	else {
		UE_LOG(LogTemp, Error, TEXT("ProjectileClass is NULL"));
	}
	
}

void AShip_entity::LevelUp()
{
	if (!LevelUpWidgetClass)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.f,
			FColor::Red,
			TEXT("No LevelUp Widget Assigned")
		);

		return;
	}

	ActiveLevelUpWidget =
		CreateWidget<UUserWidget>(
			GetWorld(),
			LevelUpWidgetClass
		);

	if (ActiveLevelUpWidget)
	{
		ActiveLevelUpWidget->AddToViewport();

		APlayerController* PC =
			Cast<APlayerController>(GetController());

		if (PC)
		{
			PC->SetPause(true);

			PC->bShowMouseCursor = true;

			FInputModeUIOnly Mode;
			PC->SetInputMode(Mode);
		}
	}
}