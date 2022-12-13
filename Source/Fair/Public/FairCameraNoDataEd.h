#pragma once
#include "CoreMinimal.h"
#include "FairCameraNoDataEd.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraNoDataEd {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    uint32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    FAIR_API FFairCameraNoDataEd();
};

