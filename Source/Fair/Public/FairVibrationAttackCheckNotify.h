#pragma once
#include "CoreMinimal.h"
#include "FairVibrationNotify.h"
#include "FairVibrationAttackCheckNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairVibrationAttackCheckNotify : public UFairVibrationNotify {
    GENERATED_BODY()
public:
    UFairVibrationAttackCheckNotify();
};

