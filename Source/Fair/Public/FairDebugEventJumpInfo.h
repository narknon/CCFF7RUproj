#pragma once
#include "CoreMinimal.h"
#include "FairEventInfo.h"
#include "FairDebugEventJumpInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugEventJumpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairEventInfo event_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> leaves_unique_id_list;
    
    FAIR_API FFairDebugEventJumpInfo();
};

