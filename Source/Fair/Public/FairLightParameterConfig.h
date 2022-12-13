#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairObjectDisplayConfig.h"
#include "FairLightParameterConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairLightParameterConfig : public FFairObjectDisplayConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContactShadowLength;
    
    FAIR_API FFairLightParameterConfig();
};

