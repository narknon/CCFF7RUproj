#pragma once
#include "CoreMinimal.h"
#include "EFairAutoSaveState.generated.h"

UENUM(BlueprintType)
enum class EFairAutoSaveState : uint8 {
    Non,
    PreLoading,
    StartAutoSave,
    AutoSaving,
    WaitError,
    Terminate,
    Num,
};

