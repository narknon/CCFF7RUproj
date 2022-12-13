#pragma once
#include "CoreMinimal.h"
#include "FairFacialAssetPathData.h"
#include "FairFaceAssetPathData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairFaceAssetPathData : public FFairFacialAssetPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_eye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_auto;
    
    FFairFaceAssetPathData();
};

