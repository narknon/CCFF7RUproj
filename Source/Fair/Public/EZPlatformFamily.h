#pragma once
#include "CoreMinimal.h"
#include "EZPlatformFamily.generated.h"

UENUM(BlueprintType)
enum class EZPlatformFamily : uint8 {
    Any,
    Valve,
    EpicGames,
    Microsoft,
    Nintendo,
    Sony,
    Unknown,
    _Num = 0x6,
};

