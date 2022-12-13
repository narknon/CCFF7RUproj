#pragma once
#include "CoreMinimal.h"
#include "ZAssetReplaceInfo.h"
#include "ZAssetReplaceInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FZAssetReplaceInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZAssetReplaceInfo> replace_info_array;
    
    FAIR_API FZAssetReplaceInfoArray();
};

