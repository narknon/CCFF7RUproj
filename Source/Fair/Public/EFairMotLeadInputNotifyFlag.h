#pragma once
#include "CoreMinimal.h"
#include "EFairMotLeadInputNotifyFlag.generated.h"

UENUM(BlueprintType)
enum class EFairMotLeadInputNotifyFlag : uint8 {
    None,
    LeadAttack,
    LeadItemMateria,
    LeadAvoid = 0x4,
    LeadStance = 0x8,
    Num,
};

