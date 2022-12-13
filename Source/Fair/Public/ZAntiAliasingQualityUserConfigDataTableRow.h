#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "Engine/DataTable.h"
#include "ZAntiAliasingQualityUserConfigParam.h"
#include "ZAntiAliasingQualityUserConfigDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FZAntiAliasingQualityUserConfigDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType anti_aliasing_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZAntiAliasingQualityUserConfigParam Param;
    
    FAIR_API FZAntiAliasingQualityUserConfigDataTableRow();
};

