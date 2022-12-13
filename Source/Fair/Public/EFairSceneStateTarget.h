#pragma once
#include "CoreMinimal.h"
#include "EFairSceneStateTarget.generated.h"

UENUM(BlueprintType)
enum class EFairSceneStateTarget : uint8 {
    IsBattleScene,
    IsUsedGameCamera,
};

