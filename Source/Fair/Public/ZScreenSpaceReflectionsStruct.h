#pragma once
#include "CoreMinimal.h"
#include "EZScreenSpaceReflectionsPlatform.h"
#include "EZScreenSpaceReflectionsQuality.h"
#include "ZScreenSpaceReflectionsStruct.generated.h"

USTRUCT(BlueprintType)
struct FZScreenSpaceReflectionsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZScreenSpaceReflectionsPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZScreenSpaceReflectionsQuality Quality;
    
    FAIR_API FZScreenSpaceReflectionsStruct();
};

