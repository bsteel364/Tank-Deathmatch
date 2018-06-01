// Copyright Brandon Steel 2018

#include "TankPlayerController.h"
#include "Tank_Deathmatch.h"


void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick( DeltaTime );
	//AimCrosshair()
	UE_LOG(LogTemp, Warning, TEXT("TIC"));
}
void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BEGIN PLAY FOR TANKPLAYERCONTROLLER"));
}

ATank* ATankPlayerController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank)
	{
		return;
	}

	//Get world location if linetrace through crosshair
}
