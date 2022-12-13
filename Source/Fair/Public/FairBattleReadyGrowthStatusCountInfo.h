#pragma once
#include "CoreMinimal.h"
#include "FairBattlReadyGrowthStatusCountType.h"
#include "FairBattleReadyGrowthStatusCountInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleReadyGrowthStatusCountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattlReadyGrowthStatusCountType GrowthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AchievementCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowthLimitCount;
    
    FAIR_API FFairBattleReadyGrowthStatusCountInfo();
};

