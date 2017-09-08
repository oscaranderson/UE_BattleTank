// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not posessing a tank"))
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is posessing tank: %s"), *(ControlledTank->GetName()));
	}
	
	UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play"))
}

void ATankPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	// AimTowardsCrosshair
}

ATank* ATankPlayerController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}



