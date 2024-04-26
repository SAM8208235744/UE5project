// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "paw.generated.h"

UCLASS()
class DEMOREPO_API Apaw : public AActor
{
	GENERATED_BODY()
	
public:	
	Apaw();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> Meshobject;
};
