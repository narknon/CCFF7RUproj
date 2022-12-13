#pragma once
#include "CoreMinimal.h"
#include "EOnlineMode.generated.h"

UENUM(BlueprintType)
enum class EOnlineMode : uint8 {
    Offline,
    LAN,
    Online,
};

