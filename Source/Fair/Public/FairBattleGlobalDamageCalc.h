#pragma once
#include "CoreMinimal.h"
#include "FairBattleGlobalDamageCalc.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleGlobalDamageCalc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardDamageKnockBackScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StanceToAbilityDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MateriaDamageReductionRate;
    
    FAIR_API FFairBattleGlobalDamageCalc();
};

