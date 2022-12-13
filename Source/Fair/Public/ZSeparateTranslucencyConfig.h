#pragma once
#include "CoreMinimal.h"
#include "EZSeparateTranslucencyCategory.h"
#include "ZSeparateTranslucencyStruct.h"
#include "ZSeparateTranslucencyConfig.generated.h"

USTRUCT(BlueprintType)
struct FZSeparateTranslucencyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZSeparateTranslucencyCategory STCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZSeparateTranslucencyStruct> PlatformConfigList;
    
    FAIR_API FZSeparateTranslucencyConfig();
};

