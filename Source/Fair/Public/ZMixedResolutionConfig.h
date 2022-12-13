#pragma once
#include "CoreMinimal.h"
#include "EZMixedResolutionCategory.h"
#include "ZMixedResolutionStruct.h"
#include "ZMixedResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FZMixedResolutionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZMixedResolutionCategory MRCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZMixedResolutionStruct> PlatformConfigList;
    
    FAIR_API FZMixedResolutionConfig();
};

