#pragma once
#include "CoreMinimal.h"
#include "EZackAttack7Type.h"
#include "ZackAttack7Particles.h"
#include "FairAnimNotifyStateTrail.h"
#include "FairAnimNotifyStateTrailAttack7.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTrailAttack7 : public UFairAnimNotifyStateTrail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack7Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack7Particles Attack7Particles;
    
    UFairAnimNotifyStateTrailAttack7();
};

