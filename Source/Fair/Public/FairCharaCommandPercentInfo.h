#pragma once
#include "CoreMinimal.h"
#include "FairCharaCommandPercentInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaCommandPercentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Command;
    
    FAIR_API FFairCharaCommandPercentInfo();
};

