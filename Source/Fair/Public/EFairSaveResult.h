#pragma once
#include "CoreMinimal.h"
#include "EFairSaveResult.generated.h"

UENUM(BlueprintType)
enum class EFairSaveResult : uint8 {
    None,
    OK,
    DoesNotExist,
    Corrupt,
    UnspecifiedError,
    NoSpace,
    DoesNotExistPS4,
    VersionError,
    Num,
};

