#pragma once
#include "CoreMinimal.h"
#include "EFairRecommendType.h"
#include "FairRecommendData.h"
#include "FairRecommendList.generated.h"

USTRUCT(BlueprintType)
struct FFairRecommendList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairRecommendType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairRecommendData dataList;
    
    FAIR_API FFairRecommendList();
};

