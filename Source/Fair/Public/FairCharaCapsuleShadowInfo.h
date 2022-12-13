#pragma once
#include "CoreMinimal.h"
#include "FairCharaCapsuleShadowInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaCapsuleShadowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName chara_mesh_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool default_shadow_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool event_shadow_flag;
    
    FAIR_API FFairCharaCapsuleShadowInfo();
};

