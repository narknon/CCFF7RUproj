#include "FairEventMaterialParameterEx.h"
#include "Components/SceneComponent.h"

AFairEventMaterialParameterEx::AFairEventMaterialParameterEx() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

