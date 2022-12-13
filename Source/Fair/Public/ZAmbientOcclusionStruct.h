#pragma once
#include "CoreMinimal.h"
#include "EZAmbientOcclusionPlatform.h"
#include "ZAmbientOcclusionElement.h"
#include "ZAmbientOcclusionStruct.generated.h"

USTRUCT(BlueprintType)
struct FZAmbientOcclusionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAmbientOcclusionPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZAmbientOcclusionElement Element;
    
    FAIR_API FZAmbientOcclusionStruct();
};

