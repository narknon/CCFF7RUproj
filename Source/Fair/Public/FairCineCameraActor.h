#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.h"
#include "FairNearClipStructOfCineCamera.h"
#include "FairCullingStructOfCineCamera.h"
#include "FairCineCameraOverwritingForSwitch.h"
#include "FairCineCameraOverwritingForXbox1.h"
#include "CineCameraActor.h"
#include "FairCineCameraActor.generated.h"

class UDirectionalLightComponent;

UCLASS(Blueprintable)
class FAIR_API AFairCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairNearClipStructOfCineCamera m_nearClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairCullingStructOfCineCamera m_culling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairCineCameraOverwritingForSwitch m_paramOverwritingForSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairCineCameraOverwritingForXbox1 m_paramOverwritingForXbox1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* HeadLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPrioritizeOwnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isForciblyEnableBgChrLight;
    
public:
    AFairCineCameraActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void TriggerSetTranslucencyReflectionCurrentSceneCopy();
    
    UFUNCTION(BlueprintCallable)
    void SetMultiLevelSequenceEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetLevelSequenceEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedParamForXbox1();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedParamForSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedNearClip();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedCulling();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableOneShotCullingDisabledUpdate();
    
    UFUNCTION(BlueprintCallable)
    void CopyNearClipToClipboard();
    
    UFUNCTION(BlueprintCallable)
    void CopyFOVToClipboard();
    
    UFUNCTION(BlueprintCallable)
    void CopyCameraPositionsToClipboard();
    
};

