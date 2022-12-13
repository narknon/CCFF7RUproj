#pragma once
#include "CoreMinimal.h"
#include "EZShadowQualityCategory.h"
#include "ZShadowQualityConfig.generated.h"

USTRUCT(BlueprintType)
struct FZShadowQualityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZShadowQualityCategory SQCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetName;
    
    FAIR_API FZShadowQualityConfig();
};

