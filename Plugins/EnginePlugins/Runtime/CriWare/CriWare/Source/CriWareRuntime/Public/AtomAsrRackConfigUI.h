#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.h"
#include "AtomAsrRackConfigUI.generated.h"

USTRUCT(BlueprintType)
struct FAtomAsrRackConfigUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtomSoundRendererType::Type> SoundRendererTypeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementID;
    
    CRIWARERUNTIME_API FAtomAsrRackConfigUI();
};

