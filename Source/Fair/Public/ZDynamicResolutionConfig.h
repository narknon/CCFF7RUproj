#pragma once
#include "CoreMinimal.h"
#include "EZDynamicResolutionCategory.h"
#include "ZDynamicResolutionStruct.h"
#include "ZDynamicResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FZDynamicResolutionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZDynamicResolutionCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZDynamicResolutionStruct> PlatformConfigList;
    
    FAIR_API FZDynamicResolutionConfig();
};

