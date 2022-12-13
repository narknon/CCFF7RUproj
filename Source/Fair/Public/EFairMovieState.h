#pragma once
#include "CoreMinimal.h"
#include "EFairMovieState.generated.h"

UENUM(BlueprintType)
enum class EFairMovieState : uint8 {
    UnUse,
    PrepareToPlay,
    Playing,
    StopToSeek,
    SeekToPrepare,
    PrepareFromSeek,
    PrepareOnly,
    ReadyWait,
    Release,
    EFairMovieStateMax,
};

