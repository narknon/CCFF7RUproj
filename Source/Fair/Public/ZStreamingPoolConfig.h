#pragma once
#include "CoreMinimal.h"
#include "EZStreamingPoolLevel.h"
#include "ZStreamingPoolConfig.generated.h"

USTRUCT(BlueprintType)
struct FZStreamingPoolConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZStreamingPoolLevel, int32> PoolSizes;
    
    FAIR_API FZStreamingPoolConfig();
};

