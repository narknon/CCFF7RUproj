#pragma once
#include "CoreMinimal.h"
#include "EFairScriptControlLightType.h"
#include "FairScriptControlLightInfo.generated.h"

class AFairScriptLightActor;

USTRUCT(BlueprintType)
struct FFairScriptControlLightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFairScriptLightActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairScriptControlLightType light_type;
    
    FAIR_API FFairScriptControlLightInfo();
};

