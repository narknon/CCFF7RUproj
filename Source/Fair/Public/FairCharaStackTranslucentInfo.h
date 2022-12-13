#pragma once
#include "CoreMinimal.h"
#include "FairCharaStackTranslucentInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaStackTranslucentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName chara_mesh_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool default_stack_translucent_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool event_stack_translucent_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_override_for_SWITCH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool default_stack_translucent_flag_for_SWITCH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool event_stack_translucent_flag_for_SWITCH;
    
    FAIR_API FFairCharaStackTranslucentInfo();
};

