#pragma once
#include "CoreMinimal.h"
#include "FairBattleKillDrainRecoveryData.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleKillDrainRecoveryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ap;
    
    FAIR_API FFairBattleKillDrainRecoveryData();
};

