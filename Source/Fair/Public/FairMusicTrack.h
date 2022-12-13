#pragma once
#include "CoreMinimal.h"
#include "FairTrack.h"
#include "FairMusicTrack.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairMusicTrack : public FFairTrack {
    GENERATED_BODY()
public:
    FFairMusicTrack();
};

