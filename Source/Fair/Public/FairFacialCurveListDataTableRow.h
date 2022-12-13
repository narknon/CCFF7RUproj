#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairFacialCurveListDataTableRow.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FFairFacialCurveListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* FacialCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableCharaMeshNames;
    
    FAIR_API FFairFacialCurveListDataTableRow();
};

