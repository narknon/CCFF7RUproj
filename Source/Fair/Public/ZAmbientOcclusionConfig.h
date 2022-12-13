#pragma once
#include "CoreMinimal.h"
#include "EZAmbientOcclusionCategory.h"
#include "ZAmbientOcclusionStruct.h"
#include "ZAmbientOcclusionConfig.generated.h"

USTRUCT(BlueprintType)
struct FZAmbientOcclusionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAmbientOcclusionCategory AOCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZAmbientOcclusionStruct> PlatformConfigList;
    
    FAIR_API FZAmbientOcclusionConfig();
};

