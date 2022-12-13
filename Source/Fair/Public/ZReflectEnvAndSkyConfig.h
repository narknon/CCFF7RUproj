#pragma once
#include "CoreMinimal.h"
#include "EZReflectEnvAndSkyCategory.h"
#include "ZReflectEnvAndSkyStruct.h"
#include "ZReflectEnvAndSkyConfig.generated.h"

USTRUCT(BlueprintType)
struct FZReflectEnvAndSkyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZReflectEnvAndSkyCategory REASCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZReflectEnvAndSkyStruct> PlatformConfigList;
    
    FAIR_API FZReflectEnvAndSkyConfig();
};

