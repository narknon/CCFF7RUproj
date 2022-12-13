#pragma once
#include "CoreMinimal.h"
#include "EZackAttack5Type.h"
#include "ZackAttack5Particles.h"
#include "FairAnimNotifyStateTrail.h"
#include "FairAnimNotifyStateTrailAttack5.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTrailAttack5 : public UFairAnimNotifyStateTrail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack5Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack5Particles Attack5Particles;
    
    UFairAnimNotifyStateTrailAttack5();
};

