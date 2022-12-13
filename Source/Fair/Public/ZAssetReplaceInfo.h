#pragma once
#include "CoreMinimal.h"
#include "EZAssetReplaceConditionPlatform.h"
#include "EZAssetReplaceConditionQuality.h"
#include "ZAssetReplaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FZAssetReplaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAssetReplaceConditionPlatform condition_platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAssetReplaceConditionQuality condition_quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString replaced_asset_path;
    
    FAIR_API FZAssetReplaceInfo();
};

