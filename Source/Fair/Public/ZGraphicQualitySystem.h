#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZGraphicQualitySystem.generated.h"

class UZAntiAliasingQualityUserConfigList;
class UZGraphicQualityConfigList;
class UZTextureQualityUserConfigList;
class UZShadowQualityUserConfigList;

UCLASS(Blueprintable)
class UZGraphicQualitySystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZGraphicQualityConfigList* m_GraphicQualityConfigCheckList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZTextureQualityUserConfigList* m_TextureQualityUserConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZShadowQualityUserConfigList* m_ShadowQualityUserConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZAntiAliasingQualityUserConfigList* m_antiAliasingQualityUserConfigList;
    
public:
    UZGraphicQualitySystem();
};

