// Fill out your copyright notice in the Description page of Project Settings.


#include "CrabCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Waypoint.h"

// Sets default values
ACrabCharacter::ACrabCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrabCharacter::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWaypoint::StaticClass(), Waypoints);
	MoveToWaypoints();
}

// Called every frame
void ACrabCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

// Called to bind functionality to input
void ACrabCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACrabCharacter::MoveToWaypoints()
{
	ACrabAIController* CrabAIController = Cast<ACrabAIController>(GetController());
	if (CrabAIController)
	{

		if (CurrentWaypoint < Waypoints.Num())
		{
			UE_LOG(LogTemp, Warning, TEXT("CurrentWaypoint is less than array length"));
			for (AActor* Waypoint : Waypoints)
			{
				AWaypoint* WaypointItr = Cast<AWaypoint>(Waypoint);
				if (WaypointItr)
				{
					
					if (WaypointItr->GetWaypointOrderedUniqueIdentifier() == CurrentWaypoint)
					{
						CrabAIController->MoveToActor(WaypointItr, 10.f, false);
						CurrentWaypoint++;
						UE_LOG(LogTemp, Warning, TEXT("Waypoint set and being moved to"));
						break;
					}
				}
			}
		}
		else {
			CurrentWaypoint = 0;
			UE_LOG(LogTemp, Warning, TEXT("Waypoint reset"));
			for (AActor* Waypoint : Waypoints)
			{
				AWaypoint* WaypointItr = Cast<AWaypoint>(Waypoint);
				if (WaypointItr)
				{

					if (WaypointItr->GetWaypointOrderedUniqueIdentifier() == CurrentWaypoint)
					{
						CrabAIController->MoveToActor(WaypointItr, 10.f, false);
						CurrentWaypoint++;
						UE_LOG(LogTemp, Warning, TEXT("Waypoint set and being moved to"));
						break;
					}
				}
			}
		}
	}
}

