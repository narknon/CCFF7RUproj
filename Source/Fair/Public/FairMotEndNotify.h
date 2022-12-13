#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairMotEndNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairMotEndNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UFairMotEndNotify();
};

