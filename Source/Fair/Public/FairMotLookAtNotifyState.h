#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotLookAtNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotLookAtNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UFairMotLookAtNotifyState();
};

