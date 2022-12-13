#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "ZAntiAliasingQualityUserConfigParam.generated.h"

USTRUCT(BlueprintType)
struct FZAntiAliasingQualityUserConfigParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAntiAliasingMethod> anti_aliasing_method;
    
    FAIR_API FZAntiAliasingQualityUserConfigParam();
};

