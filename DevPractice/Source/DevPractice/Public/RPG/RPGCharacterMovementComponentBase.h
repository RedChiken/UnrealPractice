// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "RPGCharacterMovementComponentBase.generated.h"

/**
 * 
 */
UCLASS()
class DEVPRACTICE_API URPGCharacterMovementComponentBase : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	URPGCharacterMovementComponentBase(const FObjectInitializer& ObjectInitializer);

};
