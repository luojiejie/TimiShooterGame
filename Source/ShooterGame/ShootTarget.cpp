// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootTarget.h"

// Sets default values
AShootTarget::AShootTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + FVector(0,1*Speed*DeltaTime,0));
}

