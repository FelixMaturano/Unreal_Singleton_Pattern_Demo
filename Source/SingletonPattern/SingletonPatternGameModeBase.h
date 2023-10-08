// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SingletonPatternGameModeBase.generated.h"

/**
 * 
 */
//class AInventario;
UCLASS()
class SINGLETONPATTERN_API ASingletonPatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ASingletonPatternGameModeBase();

private:

	UPROPERTY()

	class AInventario* Inventario;
	 
protected:
	virtual void BeginPlay()override;

public:
	virtual void Tick(float DeltaTime)override;



	
};
