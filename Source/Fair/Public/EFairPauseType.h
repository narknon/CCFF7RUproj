#pragma once
#include "CoreMinimal.h"
#include "EFairPauseType.generated.h"

UENUM(BlueprintType)
enum class EFairPauseType : uint8 {
    Invalid,
    MainMenu,
    Map,
    Tips,
    Battle,
    DMW,
    PauseMenu,
    SaveError,
    System,
    Home,
};

