#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraShakeRequestData.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FCameraShakeRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> shakeData;
    
    FAIR_API FCameraShakeRequestData();
};

