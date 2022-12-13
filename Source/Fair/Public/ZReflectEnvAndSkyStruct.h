#pragma once
#include "CoreMinimal.h"
#include "EZReflectEnvAndSkyPlatform.h"
#include "EZReflectEnvAndSkyResolution.h"
#include "ZReflectEnvAndSkyStruct.generated.h"

USTRUCT(BlueprintType)
struct FZReflectEnvAndSkyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZReflectEnvAndSkyPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZReflectEnvAndSkyResolution Resolution;
    
    FAIR_API FZReflectEnvAndSkyStruct();
};

