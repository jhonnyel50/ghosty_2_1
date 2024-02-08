// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_fantasma.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ABP_fantasma::ABP_fantasma()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringCamera = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringCamera"));
	SpringCamera->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(SpringCamera, USpringArmComponent::SocketName);
	
}

void ABP_fantasma::BeginPlay()
{
	Super::BeginPlay();
}

void ABP_fantasma::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABP_fantasma::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
}
