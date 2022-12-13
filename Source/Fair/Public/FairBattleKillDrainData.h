#pragma once
#include "CoreMinimal.h"
#include "FairBattleKillDrainRecoveryData.h"
#include "FairBattleKillDrainData.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleKillDrainData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainRecoveryData AttackDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainRecoveryData Attack1st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainRecoveryData Attack2nd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainRecoveryData Attack3rd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainRecoveryData Attack4th;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainRecoveryData AttackAbility;
    
    FAIR_API FFairBattleKillDrainData();
};

