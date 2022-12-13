#pragma once
#include "CoreMinimal.h"
#include "ENotifyGroundTypeOfWater.generated.h"

UENUM(BlueprintType)
enum class ENotifyGroundTypeOfWater : uint8 {
    Water/* = 0xA*/,
    Shoal/* = 0x14*/,
};

