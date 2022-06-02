// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_1_Character.generated.h"

UCLASS()
class GAME_CCII_API APlayer_1_Character : public ACharacter
{
	GENERATED_BODY()
private:
	//Motion, camera tracking with the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Camera, meta=(AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Camera, meta=(AllowPrivateAccess = "true"))
	class UCameraComponent*FollowCamera;

	//Motion, camera tracking with the keys
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Camera, meta=(AllowPrivateAccess = "true"))
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Camera, meta=(AllowPrivateAccess = "true"))
	float BaseLookUpRate;
	
	

public:
	// Sets default values for this character's properties
	APlayer_1_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveFoward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
