#pragma once
#include "CoreMinimal.h"
#include "FairCameraFloatDataEd.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraFloatDataEd {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    FAIR_API FFairCameraFloatDataEd();
};

