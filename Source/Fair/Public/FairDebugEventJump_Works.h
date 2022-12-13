#pragma once
#include "CoreMinimal.h"
#include "FairEventInfo.h"
#include "FairDebugEventJump_Works.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugEventJump_Works {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hierarchy_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairEventInfo event_info;
    
    FAIR_API FFairDebugEventJump_Works();
};

