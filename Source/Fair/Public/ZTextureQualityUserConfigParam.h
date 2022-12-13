#pragma once
#include "CoreMinimal.h"
#include "ZTextureQualityUserConfigParam.generated.h"

USTRUCT(BlueprintType)
struct FZTextureQualityUserConfigParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 streaming_pool_size;
    
    FAIR_API FZTextureQualityUserConfigParam();
};

