#pragma once
#include "CoreMinimal.h"
#include "EZFidelityFXSuperResolutionCategory.h"
#include "ZFidelityFXSuperResolutionStruct.h"
#include "ZFidelityFXSuperResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FZFidelityFXSuperResolutionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZFidelityFXSuperResolutionCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZFidelityFXSuperResolutionStruct> PlatformConfigList;
    
    FAIR_API FZFidelityFXSuperResolutionConfig();
};

