// Copyright Brandon Steel 2018

#include "TankAIController.h"
#include "Tank_Deathmatch.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("not found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI found player tank"));
	}
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move towards Player

	//Aim at player
	GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());

	// Fire when ready (Star Wars reference lol)
}

ATank* ATankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank()
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) 
	{
		return nullptr;
	}
	return Cast<ATank>(PlayerPawn);
}

