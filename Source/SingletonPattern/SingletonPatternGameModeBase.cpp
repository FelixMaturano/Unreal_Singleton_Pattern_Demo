// Copyright Epic Games, Inc. All Rights Reserved.


#include "SingletonPatternGameModeBase.h"
#include"Inventario.h"

ASingletonPatternGameModeBase::ASingletonPatternGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASingletonPatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Crear 4 inventario

	for (int i = 0; i <= 4; i++) {

		AInventario* SpawnedInventario = GetWorld()->SpawnActor<AInventario>(AInventario::StaticClass());


		if (SpawnedInventario)
		{
			Inventario = SpawnedInventario;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT(" %s se ha creado"), *Inventario->GetName()));


		}
	}


}

void ASingletonPatternGameModeBase::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}
