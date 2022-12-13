#pragma once
#include "CoreMinimal.h"
#include "EZShareBilateralUpSampleMaskCategory.h"
#include "ZShareBilateralUpSampleMaskStruct.h"
#include "ZShareBilateralUpSampleMaskConfig.generated.h"

USTRUCT(BlueprintType)
struct FZShareBilateralUpSampleMaskConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZShareBilateralUpSampleMaskCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZShareBilateralUpSampleMaskStruct> PlatformConfigList;
    
    FAIR_API FZShareBilateralUpSampleMaskConfig();
};

