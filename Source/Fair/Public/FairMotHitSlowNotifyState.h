#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotHitSlowNotifyState.generated.h"

class UFairModelAnimInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotHitSlowNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelAnimInstance* fairAnimInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float slowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowTime;
    
    UFairMotHitSlowNotifyState();
};

