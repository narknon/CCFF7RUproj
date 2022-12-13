#pragma once
#include "CoreMinimal.h"
#include "EFairAbnormalConditionType.h"
#include "FairCharaAbnormalConditionResistanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaAbnormalConditionResistanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairAbnormalConditionType AbnormalConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditiveResistanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResistanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecreaseEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinGuaranteedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalResistanceValue;
    
    FAIR_API FFairCharaAbnormalConditionResistanceInfo();
};

