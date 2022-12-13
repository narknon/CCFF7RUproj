#pragma once
#include "CoreMinimal.h"
#include "EZPostProcessType.h"
#include "ZPostProcessUserInfo.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZPostProcessSystem.generated.h"

class UZPostProcessMaterialList;
class UMaterialParameterCollectionInstance;
class APostProcessVolume;

UCLASS(Blueprintable)
class FAIR_API UZPostProcessSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* m_postProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZPostProcessMaterialList* m_postProcessMaterialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZPostProcessType, UMaterialParameterCollectionInstance*> m_parameterCollectionInstanceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZPostProcessUserInfo> m_screenLightUserInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZPostProcessUserInfo> m_gradationMaskUserInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZPostProcessUserInfo> m_radialBlurUserInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZPostProcessUserInfo> m_simpleFadeUserInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZPostProcessUserInfo> m_negaPosiInvertUserInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZPostProcessUserInfo> m_textureScrollFilterUserInfoList;
    
public:
    UZPostProcessSystem();
};

