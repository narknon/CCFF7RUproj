#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.h"
#include "ZStreamingPoolConfig.h"
#include "ZDataTableDataAssetBase.h"
#include "ZStreamingPoolConfigList.generated.h"

UCLASS(Blueprintable)
class UZStreamingPoolConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZPlatformHardware, FZStreamingPoolConfig> StreamingPoolConfigList;
    
public:
    UZStreamingPoolConfigList();
};

