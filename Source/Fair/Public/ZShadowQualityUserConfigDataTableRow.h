#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "Engine/DataTable.h"
#include "ZShadowQualityUserConfigParam.h"
#include "ZShadowQualityUserConfigDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FZShadowQualityUserConfigDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType shadow_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZShadowQualityUserConfigParam Param;
    
    FAIR_API FZShadowQualityUserConfigDataTableRow();
};

