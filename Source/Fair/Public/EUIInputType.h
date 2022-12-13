#pragma once
#include "CoreMinimal.h"
#include "EUIInputType.generated.h"

UENUM(BlueprintType)
enum class EUIInputType : uint8 {
    On,
    Off,
    Press,
    Repeat,
    Num,
};

