#pragma once
#include "CoreMinimal.h"
#include "FairBattlReadyGrowthStatusRateType.h"
#include "FairBattleReadyGrowthStatusRateInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleReadyGrowthStatusRateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattlReadyGrowthStatusRateType GrowthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Defualt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowthValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowthLimitCount;
    
    FAIR_API FFairBattleReadyGrowthStatusRateInfo();
};

