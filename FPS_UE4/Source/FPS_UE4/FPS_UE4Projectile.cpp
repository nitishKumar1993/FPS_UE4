// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPS_UE4Projectile.h"
#include "ParticleDefinitions.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AFPS_UE4Projectile::AFPS_UE4Projectile() 
{

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AFPS_UE4Projectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;
	CollisionComp->SetSphereRadius(17);

	// Set as root component
	RootComponent = CollisionComp;

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	m_mesh->AttachToComponent(CollisionComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	m_mesh->SetRelativeLocation(FVector(0, 0, 0));
	m_mesh->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	m_explosionParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionParticle"));
	m_explosionParticle->AttachToComponent(CollisionComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	m_explosionParticle->SetRelativeLocation(FVector(0, 0, 0));
	m_explosionParticle->bAutoActivate = false;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AFPS_UE4Projectile::OnHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 otherActorIndex, bool bSweep, const FHitResult & Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{ 
		if(OtherComp->Mobility == (EComponentMobility::Movable) && OtherComp->IsSimulatingPhysics())
			OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		m_explosionParticle->ActivateSystem();
		m_mesh->SetHiddenInGame(true);
		ProjectileMovement->SetActive(false);
		//Destroy();
	}
}