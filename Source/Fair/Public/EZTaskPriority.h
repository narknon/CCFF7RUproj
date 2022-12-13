#pragma once
#include "CoreMinimal.h"
#include "EZTaskPriority.generated.h"

UENUM(BlueprintType)
enum class EZTaskPriority : uint8 {
    Highest,
    PrePhysics,
    DuringPhysics,
    PostPhysics,
    PostUpdateWork,
    _Num,
};

