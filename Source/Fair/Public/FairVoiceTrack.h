#pragma once
#include "CoreMinimal.h"
#include "FairTrack.h"
#include "FairVoiceTrack.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairVoiceTrack : public FFairTrack {
    GENERATED_BODY()
public:
    FFairVoiceTrack();
};

