#pragma once
#include "CoreMinimal.h"
#include "DebugInfoLabel.generated.h"

UENUM(BlueprintType)
enum class DebugInfoLabel : uint8 {
    Story_Id,
    Map_Id,
    Script_Id,
    ViewTarget,
    Label_Count,
    GameMode,
};

