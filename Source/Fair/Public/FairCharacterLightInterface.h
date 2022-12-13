#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "FairCharacterLightInterface.generated.h"

UINTERFACE(Blueprintable)
class FAIR_API UFairCharacterLightInterface : public UInterface {
    GENERATED_BODY()
};

class FAIR_API IFairCharacterLightInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseHemisphere(bool IsUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainSkyLightIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainSkyLightColor(FLinearColor LightColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainPostProcessExposureMaxEV100(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainPostProcessColorGradingGlobalSaturation(float R, float G, float B, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainPostProcessColorGradingGlobalGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainPostProcessColorGradingGlobalContrast(float Contrast);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainExpHeightFogInscatteringColor(FVector4 Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainDirectionalLightIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereSmoothenss(float Smoothness);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereSkyPower(float power);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereSky(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereRimMaskInt(float rimMaskInt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereRimExponent(float rimExponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemispherePower(float power);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereGroundpower(float power);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereGround(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHemisphereCameraOffset(float Offset);
    
};

