// Fill out your copyright notice in the Description page of Project Settings.


#include "WormCharacter.h"

// Sets default values
AWormCharacter::AWormCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWormCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWormCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWormCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveHorizontal"), this, &AWormCharacter::MoveHorizontal);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
}

void AWormCharacter::MoveHorizontal(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

