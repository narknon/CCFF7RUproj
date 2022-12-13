#pragma once
#include "CoreMinimal.h"
#include "FairCutSceneOptimizeConfig.h"
#include "FairScreenSpaceReflectionsSystemConfig.h"
#include "FairEnvironmentFidelityFXSuperResolutionConfig.h"
#include "FairEnvironmentMixedResolutionConfig.h"
#include "FairEnvironmentShareBilateralUpSampleMaskConfig.h"
#include "FairEnvironmentDynamicResolutionConfig.h"
#include "FairEnvironmentAntiAliasingConfig.h"
#include "FairEnvironmentVolumetricFogConfig.h"
#include "FairEnvironmentReflectEnvAndSkyConfig.h"
#include "FairEnvironmentSeparateTranslucencyConfig.h"
#include "FairEnvironmentAmbientOcclusionConfig.h"
#include "FairEnvironmentViewDistanceConfig.h"
#include "FairEnvironmentShadowQualityConfig.h"
#include "GameFramework/Actor.h"
#include "FairEventEnvironmentConfig.generated.h"

UCLASS(Blueprintable)
class FAIR_API AFairEventEnvironmentConfig : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentAntiAliasingConfig> AntiAliasingConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentVolumetricFogConfig> VolumetricFogConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentReflectEnvAndSkyConfig> ReflectEnvAndSkyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentSeparateTranslucencyConfig> SeparateTranslucencyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentAmbientOcclusionConfig> AmbientOcclusionConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentViewDistanceConfig> ViewDistanceConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentShadowQualityConfig> ShadowQualityConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairCutSceneOptimizeConfig> CutSceneOptimizeConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairScreenSpaceReflectionsSystemConfig> ScreenSpaceReflectionsSystemConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentFidelityFXSuperResolutionConfig> FidelityFXSuperResolutionConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentMixedResolutionConfig> MixedResolutionConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentShareBilateralUpSampleMaskConfig> ShareBilateralUpSampleMaskConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFairEnvironmentDynamicResolutionConfig> DynamicResolutionConfigList;
    
public:
    AFairEventEnvironmentConfig();
};

