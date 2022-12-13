#pragma once
#include "CoreMinimal.h"
#include "FairLightParameterConfig.h"
#include "FairLightFogParameterConfig.h"
#include "FairObjectDisplayConfig.h"
#include "FairCharacterLightConfig.h"
#include "GameFramework/Actor.h"
#include "FairEventObjectDisplayConfig.generated.h"

UCLASS(Blueprintable)
class FAIR_API AFairEventObjectDisplayConfig : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairObjectDisplayConfig> LightDisplayConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairObjectDisplayConfig> LightCastShadowConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairLightParameterConfig> LightParameterConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairObjectDisplayConfig> EffectDisplayConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairObjectDisplayConfig> ObjectDisplayConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairObjectDisplayConfig> ObjectCastShadowConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairLightFogParameterConfig> LightFogParameterConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairCharacterLightConfig> CharacterLightConfigList;
    
public:
    AFairEventObjectDisplayConfig();
};

