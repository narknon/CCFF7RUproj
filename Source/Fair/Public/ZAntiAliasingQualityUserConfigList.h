#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "ZAntiAliasingQualityUserConfigParam.h"
#include "ZDataTableDataAssetBase.h"
#include "ZAntiAliasingQualityUserConfigList.generated.h"

UCLASS(Blueprintable)
class UZAntiAliasingQualityUserConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZGraphicQualityType, FZAntiAliasingQualityUserConfigParam> m_antiAliasingQualityUserConfigList;
    
public:
    UZAntiAliasingQualityUserConfigList();
};

