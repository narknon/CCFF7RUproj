#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairFootStepSoundDetectorListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairFootStepSoundDetectorListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharName;
    
    UPROPERTY(EditAnywhere)
    int32 SoundId[32];
    
    FAIR_API FFairFootStepSoundDetectorListTableRow();
};

