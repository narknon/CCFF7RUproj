#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FairDebugProcessingLoadCheckCutInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugProcessingLoadCheckCutInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraEyePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraEyeRef;
    
    FAIR_API FFairDebugProcessingLoadCheckCutInfoRow();
};

