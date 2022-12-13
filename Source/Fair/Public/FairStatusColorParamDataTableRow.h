#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStatusColorType.h"
#include "Engine/DataTable.h"
#include "FairStatusColorParamDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairStatusColorParamDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusColorType StatusColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StatusAddColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Flicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlickSpeed;
    
    FAIR_API FFairStatusColorParamDataTableRow();
};

