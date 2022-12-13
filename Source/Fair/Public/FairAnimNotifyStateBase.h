#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairAnimNotifyStateBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UFairAnimNotifyStateBase();
};

