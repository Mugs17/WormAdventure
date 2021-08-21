// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CrabCharacter.h"
#include "CrabAIController.generated.h"

/**
 * 
 */
UCLASS()
class WORMADVENTURES2_API ACrabAIController : public AAIController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;


public:

	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;


	
};
