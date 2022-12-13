#pragma once
#include "CoreMinimal.h"
#include "FairBattleReadyGrowthStatusRateInfo.h"
#include "FairBattleReadyGrowthStatusCountInfo.h"
#include "FairBattleReadyGrowthStatusInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleReadyGrowthStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleReadyGrowthStatusRateInfo> ReadyGrowthStatusRateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleReadyGrowthStatusCountInfo> ReadyGrowthStatusCountInfo;
    
    FAIR_API FFairBattleReadyGrowthStatusInfo();
};

