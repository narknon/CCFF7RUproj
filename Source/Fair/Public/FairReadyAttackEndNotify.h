#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairReadyAttackEndNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairReadyAttackEndNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UFairReadyAttackEndNotify();
};

