#pragma once
#include "CoreMinimal.h"
#include "EFairDefinitionOfSeparateTranslucencyScreenPercentage.h"
#include "EZSeparateTranslucencyPlatform.h"
#include "ZSeparateTranslucencyStruct.generated.h"

USTRUCT(BlueprintType)
struct FZSeparateTranslucencyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZSeparateTranslucencyPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairDefinitionOfSeparateTranslucencyScreenPercentage ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAutoDownsample;
    
    FAIR_API FZSeparateTranslucencyStruct();
};

