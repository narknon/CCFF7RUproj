#pragma once
#include "CoreMinimal.h"
#include "EffectDecalRequestData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FEffectDecalRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    FAIR_API FEffectDecalRequestData();
};

