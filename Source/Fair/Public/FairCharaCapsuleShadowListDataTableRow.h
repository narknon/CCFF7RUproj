#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairCharaCapsuleShadowListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaCapsuleShadowListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName chara_mesh_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool default_shadow_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool event_shadow_flag;
    
    FAIR_API FFairCharaCapsuleShadowListDataTableRow();
};

