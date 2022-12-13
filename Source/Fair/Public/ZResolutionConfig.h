#pragma once
#include "CoreMinimal.h"
#include "EZDisplayResolution.h"
#include "Engine/DataTable.h"
#include "ZDynamicResolutionParameters.h"
#include "ZResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FZResolutionConfig : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZDisplayResolution DisplayResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InternalResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDynamicResolutionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZDynamicResolutionParameters DynamicResolutionParameters;
    
    FZResolutionConfig();
};

