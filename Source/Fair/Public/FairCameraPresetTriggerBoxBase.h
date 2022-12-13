#pragma once
#include "CoreMinimal.h"
#include "FairCameraAreaPresetData.h"
#include "FairCameraAreaPresetRegisterData.h"
#include "Engine/TriggerBox.h"
#include "FairCameraPresetTriggerBoxBase.generated.h"

UCLASS(Blueprintable)
class FAIR_API AFairCameraPresetTriggerBoxBase : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCameraAreaPresetRegisterData m_RegisterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCameraAreaPresetData m_PresetData;
    
public:
    AFairCameraPresetTriggerBoxBase();
};

