#pragma once
#include "CoreMinimal.h"
#include "EZackAttackCommonType.h"
#include "ZackAttack1Particles.h"
#include "FairAnimNotifyStateTrail.h"
#include "FairAnimNotifyStateTrailAttackCommon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTrailAttackCommon : public UFairAnimNotifyStateTrail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttackCommonType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack1Particles attack1Particles;
    
    UFairAnimNotifyStateTrailAttackCommon();
};

