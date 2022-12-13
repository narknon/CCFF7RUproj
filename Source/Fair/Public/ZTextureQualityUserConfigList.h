#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "ZTextureQualityUserConfigParam.h"
#include "ZDataTableDataAssetBase.h"
#include "ZTextureQualityUserConfigList.generated.h"

UCLASS(Blueprintable)
class UZTextureQualityUserConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZGraphicQualityType, FZTextureQualityUserConfigParam> m_TextureQualityUserConfigList;
    
public:
    UZTextureQualityUserConfigList();
};

