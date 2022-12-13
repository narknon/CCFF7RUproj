#pragma once
#include "CoreMinimal.h"
#include "EFairFacialForBodyAnimType.generated.h"

UENUM(BlueprintType)
enum class EFairFacialForBodyAnimType : uint8 {
    None,
    LimitTech,
    EnglishFacial,
    All = 0xFF,
};

