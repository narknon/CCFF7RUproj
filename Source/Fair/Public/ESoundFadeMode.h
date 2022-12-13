#pragma once
#include "CoreMinimal.h"
#include "ESoundFadeMode.generated.h"

UENUM(BlueprintType)
enum class ESoundFadeMode : uint8 {
    Main,
    Interrupt,
    ResumeFromInterrupt,
};

