#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "ZGraphicQualityConfigParam.h"
#include "ZDataTableDataAssetBase.h"
#include "ZGraphicQualityConfigList.generated.h"

UCLASS(Blueprintable)
class UZGraphicQualityConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZGraphicQualityType, FZGraphicQualityConfigParam> m_graphicQualityConfigList;
    
public:
    UZGraphicQualityConfigList();
};

