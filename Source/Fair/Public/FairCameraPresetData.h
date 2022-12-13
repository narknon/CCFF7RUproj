#pragma once
#include "CoreMinimal.h"
#include "FairCameraPreset.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCameraPresetData.generated.h"

UCLASS(Blueprintable)
class UFairCameraPresetData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCameraPreset> m_CameraPresetList;
    
public:
    UFairCameraPresetData();
};

