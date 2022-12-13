#pragma once
#include "CoreMinimal.h"
#include "EDefinitionPlatform.generated.h"

UENUM(BlueprintType)
enum class EDefinitionPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

