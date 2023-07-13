// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"

void AToonTanksGameMode::ActorDied(AActor* DeadActor)
{
    if(DeadActor == Tank)
    {
        Tank -> HandleDestruction();
        if(Tank -> GetTankPlayerContoller())
        {
              Tank->DisableInput(Tank -> GetTankPlayerContoller());
              Tank -> GetTankPlayerContoller() -> bShowMouseCursor = false;
        }
    }
    else if(ATower* DestroyedTower = Cast<ATower>(DeadActor))
    {
        DestroyedTower->HandleDestruction();
    }
}

void AToonTanksGameMode::BeginPlay()
{
    Super::BeginPlay();

    Tank = Cast<ATank>(UGamePlayStatics::GetPlayerPawn(this, 0));
}