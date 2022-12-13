#pragma once
#include "CoreMinimal.h"
#include "EBoneAttachModifyMode.generated.h"

UENUM(BlueprintType)
enum class EBoneAttachModifyMode : uint8 {
    BMM_Ignore,
    BMM_Replace,
    BMM_Additive,
    BMM_MAX UMETA(Hidden),
};

