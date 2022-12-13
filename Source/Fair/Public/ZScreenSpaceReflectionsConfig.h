#pragma once
#include "CoreMinimal.h"
#include "EZScreenSpaceReflectionsCategory.h"
#include "ZScreenSpaceReflectionsStruct.h"
#include "ZScreenSpaceReflectionsConfig.generated.h"

USTRUCT(BlueprintType)
struct FZScreenSpaceReflectionsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZScreenSpaceReflectionsCategory VDCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZScreenSpaceReflectionsStruct> PlatformConfigList;
    
    FAIR_API FZScreenSpaceReflectionsConfig();
};

