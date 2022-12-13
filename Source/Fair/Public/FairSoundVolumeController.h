#pragma once
#include "CoreMinimal.h"
#include "SoundVolumeSetting.h"
#include "UObject/Object.h"
#include "FairSoundVolumeController.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairSoundVolumeController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundVolumeSetting> m_SoundVolumeSetting;
    
public:
    UFairSoundVolumeController();
};

