#pragma once
#include "CoreMinimal.h"
#include "FairSaveGameSlotBuffer.generated.h"

USTRUCT(BlueprintType)
struct FFairSaveGameSlotBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_buf;
    
    FAIR_API FFairSaveGameSlotBuffer();
};

