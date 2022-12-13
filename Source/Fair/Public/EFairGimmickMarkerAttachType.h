#pragma once
#include "CoreMinimal.h"
#include "EFairGimmickMarkerAttachType.generated.h"

UENUM(BlueprintType)
enum class EFairGimmickMarkerAttachType : uint8 {
    Unknown,
    AttachActor,
    AttachActorAll,
    AttachBox,
    FixLocation,
    ToMap,
};

