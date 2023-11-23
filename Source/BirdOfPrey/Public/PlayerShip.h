// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()
	
public:

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void GetShipConstantVelocity(FVector& Direction, float& Speed);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ClampToCameraBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
    void GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CalcOutofBoundsAdjustment();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void GetPlayerAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ShouldSpawnAIController();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateHoverPitch();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void HasDiedRecently(bool& ReturnValue);

    virtual void Take_Damage(float Damage, float& ActualDamage) override;

    UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
    ABasePlayerController* BasePlayerController;

    UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
    float InvulnerabilityTime;
};
