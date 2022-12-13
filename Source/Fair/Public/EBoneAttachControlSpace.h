#pragma once
#include "CoreMinimal.h"
#include "EBoneAttachControlSpace.generated.h"

UENUM(BlueprintType)
enum class EBoneAttachControlSpace : uint8 {
    BCS_WorldSpace,
    BCS_ComponentSpace,
    BCS_ParentBoneSpace,
    BCS_BoneSpace,
    BCS_MAX UMETA(Hidden),
};

