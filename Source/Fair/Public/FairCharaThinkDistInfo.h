#pragma once
#include "CoreMinimal.h"
#include "FairCharaCommandPercentInfo.h"
#include "FairCharaThinkDistInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaThinkDistInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaCommandPercentInfo> CommandPercentInfo;
    
    FAIR_API FFairCharaThinkDistInfo();
};

