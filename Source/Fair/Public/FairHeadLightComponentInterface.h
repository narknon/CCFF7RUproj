#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FairHeadLightComponentInterface.generated.h"

UINTERFACE(Blueprintable)
class FAIR_API UFairHeadLightComponentInterface : public UInterface {
    GENERATED_BODY()
};

class FAIR_API IFairHeadLightComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeadLightOffsetRot(float offsetRotX, float offsetRotY, float offsetRotZ);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeadLightIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeadLightColor(float R, float G, float B, float A);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableHeadLight(bool IsEnable);
    
};

