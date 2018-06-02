// Copyright Brandon Steel 2018

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_DEATHMATCH_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
public:
	ATank* GetControlledTank();

	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	ATank* GetPlayerTank();
};
