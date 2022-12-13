#pragma once
#include "CoreMinimal.h"
#include "FairCharaCapsuleInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaCapsuleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FAIR_API FFairCharaCapsuleInfo();
};

