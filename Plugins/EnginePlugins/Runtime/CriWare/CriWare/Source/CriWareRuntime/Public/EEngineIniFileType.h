#pragma once
#include "CoreMinimal.h"
#include "EEngineIniFileType.generated.h"

UENUM(BlueprintType)
namespace EEngineIniFileType {
    enum Type {
        EngBaseEngineIni,
        EngWindowsEngineIni,
        ProjDefaultEngineIni = 0x4,
        ProjWindowsEngineIni,
    };
}

