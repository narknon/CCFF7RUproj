#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "Engine/DataTable.h"
#include "ZTextureQualityUserConfigParam.h"
#include "ZTextureQualityUserConfigDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FZTextureQualityUserConfigDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType texture_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZTextureQualityUserConfigParam Param;
    
    FAIR_API FZTextureQualityUserConfigDataTableRow();
};

