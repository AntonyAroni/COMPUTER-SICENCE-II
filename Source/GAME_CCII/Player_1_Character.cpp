// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_1_Character.h"

#include "CommonAnimTypes.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APlayer_1_Character::APlayer_1_Character() :
	BaseTurnRate(45.f), BaseLookUpRate(45.f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom-> SetupAttachment(RootComponent);
	CameraBoom -> TargetArmLength = 300;
	CameraBoom -> bUsePawnControlRotation =true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera -> SetupAttachment(CameraBoom,USpringArmComponent::SocketName);
	FollowCamera -> bUsePawnControlRotation=false;

	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch =false;
	bUseControllerRotationRoll = false;
}

// Called when the game starts or when spawned
void APlayer_1_Character::BeginPlay()
{
	Super::BeginPlay();
	/*int numero=3;
	UE_LOG(LogTemp,Warning,TEXT("%d HOLA MUNDO "),numero);
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,15,FColor::Green,TEXT("MENSAJE DE PRUEBA"));
	}*/
}

void APlayer_1_Character::MoveFoward(float Value)
{
	if(Controller != nullptr && Value !=0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw,0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction,Value);
	}   
}

void APlayer_1_Character::MoveRight(float Value)
{
	if(Controller != nullptr &&Value != 0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw,0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction,Value);
	}
}

void APlayer_1_Character::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate*BaseTurnRate*GetWorld()->GetDeltaSeconds());
}

void APlayer_1_Character::LookAtRate(float Rate)
{
	AddControllerPitchInput(Rate*BaseTurnRate*GetWorld()->GetDeltaSeconds());
}

// Called every frame
void APlayer_1_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_1_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveFoward", this,&APlayer_1_Character::MoveFoward);
	PlayerInputComponent->BindAxis("MoveRight", this,&APlayer_1_Character::MoveRight);

	//camera movement direction keys
	PlayerInputComponent->BindAxis("TurnRate", this, &APlayer_1_Character::TurnAtRate);
	PlayerInputComponent->BindAxis("lookUpRate", this, &APlayer_1_Character::LookAtRate);

	//camera movement direction mouse
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&ACharacter::StopJumping);

}

