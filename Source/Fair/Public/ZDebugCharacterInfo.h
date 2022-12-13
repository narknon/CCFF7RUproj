#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZDebugCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FZDebugCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FAIR_API FZDebugCharacterInfo();
};

