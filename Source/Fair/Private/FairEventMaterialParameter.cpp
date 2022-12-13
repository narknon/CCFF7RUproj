#include "FairEventMaterialParameter.h"
#include "Components/SceneComponent.h"

AFairEventMaterialParameter::AFairEventMaterialParameter() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ParameterType = EFairMaterialParameterType::Scalar;
    this->UseFinishValue = false;
    this->ScalarValue = 0.00f;
    this->FinishScalarValue = 0.00f;
    this->TextureValue = NULL;
    this->FinishTextureValue = NULL;
}

