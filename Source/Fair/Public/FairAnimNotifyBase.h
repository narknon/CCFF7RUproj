#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairAnimNotifyBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class FAIR_API UFairAnimNotifyBase : public UAnimNotify {
    GENERATED_BODY()
public:
    UFairAnimNotifyBase();
};

