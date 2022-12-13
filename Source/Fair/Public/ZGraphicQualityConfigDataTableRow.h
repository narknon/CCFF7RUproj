#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "Engine/DataTable.h"
#include "ZGraphicQualityConfigDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FZGraphicQualityConfigDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType graphic_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType texture_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType shadow_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType anti_aliasing_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ambient_occlusion_flag;
    
    FAIR_API FZGraphicQualityConfigDataTableRow();
};

