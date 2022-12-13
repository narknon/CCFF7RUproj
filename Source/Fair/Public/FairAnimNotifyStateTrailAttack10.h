#pragma once
#include "CoreMinimal.h"
#include "EZackAttack10Type.h"
#include "ZackAttack10Particles.h"
#include "FairAnimNotifyStateTrail.h"
#include "FairAnimNotifyStateTrailAttack10.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTrailAttack10 : public UFairAnimNotifyStateTrail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack10Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack10Particles Attack10Particles;
    
    UFairAnimNotifyStateTrailAttack10();
};

