#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogCategory.h"
#include "ZVolumetricFogStruct.h"
#include "ZVolumetricFogConfig.generated.h"

USTRUCT(BlueprintType)
struct FZVolumetricFogConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZVolumetricFogCategory VFCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZVolumetricFogStruct> PlatformConfigList;
    
    FAIR_API FZVolumetricFogConfig();
};

