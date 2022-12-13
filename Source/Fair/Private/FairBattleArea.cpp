#include "FairBattleArea.h"
#include "Components/StaticMeshComponent.h"

AFairBattleArea::AFairBattleArea() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

