// Fill out your copyright notice in the Description page of Project Settings.


#include "paw.h"

Apaw::Apaw()
{
	PrimaryActorTick.bCanEverTick = true;
	Meshobject = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Meshobject;
}

void Apaw::BeginPlay()
{
	Super::BeginPlay();
	
}

void Apaw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

