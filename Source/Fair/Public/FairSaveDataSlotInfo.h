#pragma once
#include "CoreMinimal.h"
#include "FairSaveDataSlotInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFairSaveDataSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* pCapturePicture;
    
    FAIR_API FFairSaveDataSlotInfo();
};

