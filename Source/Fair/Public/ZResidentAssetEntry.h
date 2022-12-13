#pragma once
#include "CoreMinimal.h"
#include "ZResidentAssetEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FZResidentAssetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reference_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* resident_asset;
    
    FAIR_API FZResidentAssetEntry();
};

