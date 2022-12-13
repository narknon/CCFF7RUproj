#pragma once
#include "CoreMinimal.h"
#include "ZResidentAssetEntry.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZAssetSystem.generated.h"

class UObject;
class UStreamableRenderAsset;

UCLASS(Blueprintable)
class UZAssetSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStreamableRenderAsset*, int32> ForceMipLevelsResidentObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStreamableRenderAsset*, int32> FastForceFullyResidentObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FZResidentAssetEntry> m_residentAssetEntries;
    
public:
    UZAssetSystem();
};

