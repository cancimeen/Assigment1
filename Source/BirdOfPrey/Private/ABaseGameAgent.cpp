// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseGameAgent.h"

// Sets default values
AABaseGameAgent::AABaseGameAgent()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{

}

void AABaseGameAgent::GetWeaponSpawnTransform(FTransform& SpawnTransform)
{

}

void AABaseGameAgent::SpawnDefaultWeapon()
{

}

void AABaseGameAgent::StartFire()
{

}

void AABaseGameAgent::StopFire()
{

}

void AABaseGameAgent::Take_Damage(float Damage, float& ActualDamage)
{

}

void AABaseGameAgent::IsAlive(bool& Alive)
{

}

void AABaseGameAgent::Died_Implementation(AController* Killer)
{

}

void AABaseGameAgent::PlayHitEffects()
{

}

void AABaseGameAgent::CleanUp()
{

}

void AABaseGameAgent::ApplyAgentInfo_Implementation(FAgentInfo NewAgentInfo)
{

}

void AABaseGameAgent::AimAt(FVector AimTarget)
{

}

void AABaseGameAgent::PlayDeathEffects()
{

}

void AABaseGameAgent::CheckForOutOfBounds()
{

}

