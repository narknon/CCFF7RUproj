#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotPossibleNotifyStateBase.generated.h"

class UFairModelAnimInstance;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotPossibleNotifyStateBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelAnimInstance* fairAnimInstance;
    
public:
    UFairMotPossibleNotifyStateBase();
};

