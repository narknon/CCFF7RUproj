#pragma once
#include "CoreMinimal.h"
#include "AtomAsrRackConfig.generated.h"

USTRUCT(BlueprintType)
struct FAtomAsrRackConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundRendererType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementID;
    
    CRIWARERUNTIME_API FAtomAsrRackConfig();
};

