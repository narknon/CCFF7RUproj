#pragma once
#include "CoreMinimal.h"
#include "VibrationRequestData.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairVibration.generated.h"

class UFairVibrationMotorScaleData;
class UFairVibrationMasterScaleData;
class UForceFeedbackEffect;

UCLASS(Blueprintable)
class FAIR_API UFairVibration : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* m_PresetEffect[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVibrationRequestData> m_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairVibrationMasterScaleData* m_masterScaleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairVibrationMotorScaleData* m_motorScaleData;
    
public:
    UFairVibration();
    UFUNCTION(BlueprintCallable)
    void StopVibration(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void PlayVibrationSetTime(UForceFeedbackEffect* padEfeect, float Time, FName Tag, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable)
    void PlayVibration(UForceFeedbackEffect* padEfeect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
};

