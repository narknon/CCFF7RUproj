#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotJumpMoveSpeedNotifyState.generated.h"

class UFairModelAnimInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotJumpMoveSpeedNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelAnimInstance* fairAnimInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveVMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float move;
    
    UFairMotJumpMoveSpeedNotifyState();
};

