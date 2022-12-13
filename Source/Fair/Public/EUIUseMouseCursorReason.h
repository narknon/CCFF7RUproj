#pragma once
#include "CoreMinimal.h"
#include "EUIUseMouseCursorReason.generated.h"

UENUM(BlueprintType)
enum class EUIUseMouseCursorReason : uint8 {
    Title,
    MainMenu,
    Pause,
    EventChoice,
    SystemChoice,
    Tutorial,
    GameOver,
    Num,
};

