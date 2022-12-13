#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraShakeParameter.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FCameraShakeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> camera_shake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float decay_distance_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float decay_distance_max;
    
    FAIR_API FCameraShakeParameter();
};

