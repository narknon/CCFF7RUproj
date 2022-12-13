#pragma once
#include "CoreMinimal.h"
#include "EZackAttack6Type.h"
#include "ZackAttack6Particles.h"
#include "FairAnimNotifyStateTrail.h"
#include "FairAnimNotifyStateTrailAttack6.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTrailAttack6 : public UFairAnimNotifyStateTrail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack6Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack6Particles Attack6Particles;
    
    UFairAnimNotifyStateTrailAttack6();
};

