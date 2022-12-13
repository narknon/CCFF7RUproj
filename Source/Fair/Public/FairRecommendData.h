#pragma once
#include "CoreMinimal.h"
#include "FairRecommendData.generated.h"

USTRUCT(BlueprintType)
struct FFairRecommendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mailId;
    
    FAIR_API FFairRecommendData();
};

