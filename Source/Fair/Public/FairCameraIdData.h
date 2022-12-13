#pragma once
#include "CoreMinimal.h"
#include "FairCameraIdData.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraIdData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    FAIR_API FFairCameraIdData();
};

