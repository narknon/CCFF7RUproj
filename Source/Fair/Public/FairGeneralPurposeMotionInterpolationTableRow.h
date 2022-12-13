#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairGeneralPurposeMotionInterpolationTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairGeneralPurposeMotionInterpolationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterpolatedValue;
    
    FAIR_API FFairGeneralPurposeMotionInterpolationTableRow();
};

