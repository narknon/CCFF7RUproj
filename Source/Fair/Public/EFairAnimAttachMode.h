#pragma once
#include "CoreMinimal.h"
#include "EFairAnimAttachMode.generated.h"

UENUM(BlueprintType)
enum class EFairAnimAttachMode : uint8 {
    Normal,
    BaseBoneTrans,
    Num,
};

