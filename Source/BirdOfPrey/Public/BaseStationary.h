// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseGameAgent.h"
#include "BaseStationary.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseStationary : public AABaseGameAgent
{
	GENERATED_BODY()
	
	virtual void Died_Implementation(AController* Killer) override;
};
