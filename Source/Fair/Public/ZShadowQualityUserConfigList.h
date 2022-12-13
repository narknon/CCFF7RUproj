#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "ZShadowQualityUserConfigParam.h"
#include "ZDataTableDataAssetBase.h"
#include "ZShadowQualityUserConfigList.generated.h"

UCLASS(Blueprintable)
class UZShadowQualityUserConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZGraphicQualityType, FZShadowQualityUserConfigParam> m_ShadowQualityUserConfigList;
    
public:
    UZShadowQualityUserConfigList();
};

