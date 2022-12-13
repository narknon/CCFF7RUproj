#pragma once
#include "CoreMinimal.h"
#include "FairMapSoundSetting.generated.h"

USTRUCT(BlueprintType)
struct FFairMapSoundSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString envSoundCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dspBusSnapShotName;
    
    FAIR_API FFairMapSoundSetting();
};

