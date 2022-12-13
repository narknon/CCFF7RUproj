#pragma once
#include "CoreMinimal.h"
#include "EPauseRequestState.generated.h"

UENUM(BlueprintType)
enum class EPauseRequestState : uint8 {
    Invalid,
    Init,
    Delay,
    Slow,
    Term,
};

