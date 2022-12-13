#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairCharacterParameterTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharacterParameterTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 discimgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EyeInformationForFacePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MouthInformationForFacePattern;
    
    FAIR_API FFairCharacterParameterTableRow();
};

