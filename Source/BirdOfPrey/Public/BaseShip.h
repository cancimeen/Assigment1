// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseShip : public AABaseGameAgent
{
	GENERATED_BODY()

public:

	virtual void ApplyAgentInfo_Implementation(FAgentInfo NewAgentInfo) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;
	
};
