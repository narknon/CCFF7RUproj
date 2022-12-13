#pragma once
#include "CoreMinimal.h"
#include "FairCharaNameListToShareAnim.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaNameListToShareAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SharingSourceCharaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SharingSourceCharaCategoryName;
    
    FAIR_API FFairCharaNameListToShareAnim();
};

