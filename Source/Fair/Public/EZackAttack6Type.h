#pragma once
#include "CoreMinimal.h"
#include "EZackAttack6Type.generated.h"

UENUM(BlueprintType)
enum class EZackAttack6Type : uint8 {
    PowerAttack/* = 0x7041*/,
    PowerDrain/* = 0x7054*/,
    PowerAspirx/* = 0x7057*/,
    PowerBom/* = 0x7043*/,
    Blow,
    EZackAttack6Type_MAX/* = 0x7058*/,
};

