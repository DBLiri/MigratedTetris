// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class SUPER_DUPER_TETRIS_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	public:

	UPROPERTY(VisibleAnywhere, Category = Basic)
	uint32 HighScore;
	
};
