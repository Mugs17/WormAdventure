// Fill out your copyright notice in the Description page of Project Settings.


#include "CrabAIController.h"
#include "NavigationData.h"



void ACrabAIController::BeginPlay()
{
	Super::BeginPlay();

//	FVector CrabLocation;

//	GetOwner()->GetActorLocation();

	//MoveToLocation()

//	FNavLocation* RandomPointNav;

//	ANavigationData::GetRandomReachablePointInRadius(GetOwner()->GetActorLocation(), 1000, RandomPointNav);



	//GetPoint

	//this->MoveToLocation()

}

void ACrabAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	ACrabCharacter* CrabCharacter = Cast<ACrabCharacter>(GetPawn());

	if (CrabCharacter)
	{
		CrabCharacter->MoveToWaypoints();
	}
}
