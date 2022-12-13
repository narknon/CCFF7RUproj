#pragma once
#include "CoreMinimal.h"
#include "FairFootStepSound.h"
#include "ZDataTableDataAssetBase.h"
#include "FairFootStepSoundDetector.generated.h"

UCLASS(Blueprintable)
class UFairFootStepSoundDetector : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairFootStepSound> m_footStepSoundList;
    
public:
    UFairFootStepSoundDetector();
};

