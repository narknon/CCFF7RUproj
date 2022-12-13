#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ZDataTableDataAssetBase.generated.h"

UCLASS(Blueprintable)
class UZDataTableDataAssetBase : public UDataAsset {
    GENERATED_BODY()
public:
    UZDataTableDataAssetBase();
private:
    UFUNCTION(BlueprintCallable)
    void buildDataAsset();
    
};

