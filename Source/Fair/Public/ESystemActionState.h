#pragma once
#include "CoreMinimal.h"
#include "ESystemActionState.generated.h"

UENUM(BlueprintType)
enum class ESystemActionState : uint8 {
    Invalid,
    Start,
    WaitCondition,
    PreWait,
    InitCommand,
    Exec,
    TermCommand,
    PostWait,
    Finish,
    Num,
};

