#pragma once
#include "CoreMinimal.h"
#include "FairMotPossibleNotifyStateBase.h"
#include "FairMotPossibleAvoidNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotPossibleAvoidNotifyState : public UFairMotPossibleNotifyStateBase {
    GENERATED_BODY()
public:
    UFairMotPossibleAvoidNotifyState();
};

