#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ZFidelityFXSuperResolutionStruct.h"
#include "ZShareBilateralUpSampleMaskStruct.h"
#include "ZVolumetricFogStruct.h"
#include "ZReflectEnvAndSkyStruct.h"
#include "ZSeparateTranslucencyStruct.h"
#include "ZAmbientOcclusionStruct.h"
#include "ZMapConfigLevelInfo.h"
#include "ZMapConfigListDataTableRow.generated.h"

class UTextureCube;
class UWorld;

USTRUCT(BlueprintType)
struct FZMapConfigListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> main_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZMapConfigLevelInfo> sub_levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bone_table_discimg_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool volumetric_fog_pre_small_resolution_workaround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ssr_force_current_scene_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureCube> use_cubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName anti_aliasing_preset_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZVolumetricFogStruct> volumetric_fog_config_for_platform_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZSeparateTranslucencyStruct> effect_translucency_config_for_platform_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZAmbientOcclusionStruct> ambient_occlusion_config_for_platform_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZReflectEnvAndSkyStruct> reflect_env_and_sky_config_for_platform_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZFidelityFXSuperResolutionStruct> fidelity_fx_super_resolution_config_for_platform_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZShareBilateralUpSampleMaskStruct> share_bilateral_config_for_platform_list;
    
    FAIR_API FZMapConfigListDataTableRow();
};

