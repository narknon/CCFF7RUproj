#pragma once
#include "CoreMinimal.h"
#include "EFairDestinationDataType.generated.h"

UENUM(BlueprintType)
enum class EFairDestinationDataType : uint8 {
    Unknown,
    AttachActor,
    AttachBox,
    FixLocation,
};

