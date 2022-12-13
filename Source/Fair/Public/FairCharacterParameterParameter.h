#pragma once
#include "CoreMinimal.h"
#include "FairCharacterParameterParameter.generated.h"

USTRUCT(BlueprintType)
struct FFairCharacterParameterParameter {
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
    
    FAIR_API FFairCharacterParameterParameter();
};

