// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FPS_UE4.h"
#include "GameFramework/Actor.h"
#include "HealthDroppable.generated.h"

UCLASS()
class FPS_UE4_API AHealthDroppable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthDroppable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* m_meshComp;

	UPROPERTY(EditAnywhere)
		UBoxComponent* m_collider;

	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* m_particleStill;

	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* m_particleEnd; 

	UPROPERTY(EditAnywhere)
		UBoxComponent* m_trigger;

	UFUNCTION()
		void OnDroppableGotHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void Explode();

};
