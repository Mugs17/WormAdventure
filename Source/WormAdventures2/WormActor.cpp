// Fill out your copyright notice in the Description page of Project Settings.


#include "WormActor.h"

// Sets default values
AWormActor::AWormActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWormActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWormActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

