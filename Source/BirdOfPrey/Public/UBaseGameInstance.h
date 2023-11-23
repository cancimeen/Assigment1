// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AgentInfo.h"
#include "UBaseGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API UUBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerAgentInfoFor(int PlayerControllerID, FAgentInfo AgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfoFor(int PlayerControllerID, FAgentInfo& ReturnValue, bool& Succes);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<FAgentInfo> PlayerAgentInfo;
};
