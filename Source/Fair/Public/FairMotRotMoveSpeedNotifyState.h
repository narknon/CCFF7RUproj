#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotRotMoveSpeedNotifyState.generated.h"

class UFairModelAnimInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotRotMoveSpeedNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelAnimInstance* fairAnimInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotMoveVMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotMove;
    
    UFairMotRotMoveSpeedNotifyState();
};

