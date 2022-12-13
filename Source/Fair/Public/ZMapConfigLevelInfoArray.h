#pragma once
#include "CoreMinimal.h"
#include "ZVolumetricFogStruct.h"
#include "ZSeparateTranslucencyStruct.h"
#include "ZMapConfigLevelInfo.h"
#include "ZMapConfigLevelInfoArray.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct FZMapConfigLevelInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZMapConfigLevelInfo> level_info_array;
    
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
    
    FAIR_API FZMapConfigLevelInfoArray();
};

