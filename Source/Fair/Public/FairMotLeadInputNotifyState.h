#pragma once
#include "CoreMinimal.h"
#include "EFairMotLeadInputNotifyFlag.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotLeadInputNotifyState.generated.h"

class UFairModelAnimInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotLeadInputNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairMotLeadInputNotifyFlag notifyFalg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelAnimInstance* fairAnimInstance;
    
public:
    UFairMotLeadInputNotifyState();
};

