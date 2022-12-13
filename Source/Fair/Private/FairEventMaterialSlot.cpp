#include "FairEventMaterialSlot.h"
#include "Components/SceneComponent.h"

AFairEventMaterialSlot::AFairEventMaterialSlot() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

