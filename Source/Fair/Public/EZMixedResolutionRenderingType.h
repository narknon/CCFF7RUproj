#pragma once
#include "CoreMinimal.h"
#include "EZMixedResolutionRenderingType.generated.h"

UENUM(BlueprintType)
enum class EZMixedResolutionRenderingType : uint8 {
    Invalid,
    Standard,
    AfterDOF,
    StandardAndAfterDOF,
};

