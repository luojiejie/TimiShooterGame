// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootTarget.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AShootTarget::AShootTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;
	
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	// SphereComp->SetCollisionResponseToChannels(ECR_Ignore);
	// SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AShootTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShootTarget::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	PlayEffect();
}

// Called every frame
void AShootTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShootTarget::PlayEffect()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, HittedFx, GetActorLocation());

	Destroy(false);
}
