// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthDroppable.h"


// Sets default values
AHealthDroppable::AHealthDroppable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	m_collider->SetWorldScale3D(FVector(1, 1, 1));
	m_collider->bGenerateOverlapEvents = true;
	m_collider->OnComponentHit.AddDynamic(this, &AHealthDroppable::OnDroppableGotHit);
	m_collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	RootComponent = m_collider;

	m_meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	m_meshComp->AttachToComponent(m_collider, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	m_meshComp->SetRelativeLocation(FVector(0, 0, 0));

	m_particleStill = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleStill"));
	m_particleStill->bAutoActivate = true;
	m_particleStill->AttachToComponent(m_collider, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	m_particleStill->SetRelativeLocation(FVector(0, 0, 0));

	m_particleEnd = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleEnd"));
	m_particleEnd->bAutoActivate = false;
	m_particleEnd->AttachToComponent(m_collider, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	m_particleEnd->SetRelativeLocation(FVector(0, 0, 0));

	m_trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	m_trigger->AttachToComponent(m_collider, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	m_trigger->SetRelativeLocation(FVector(0, 190, 350));
	m_trigger->SetRelativeScale3D(FVector(1, 1, 1));
}

// Called when the game starts or when spawned
void AHealthDroppable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealthDroppable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthDroppable::OnDroppableGotHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
	//m_particleEnd->ActivateSystem();
	//m_collider->SetSimulatePhysics(true);
	//Destroy();
}

void AHealthDroppable::Explode()
{
	m_particleEnd->ActivateSystem();
}

