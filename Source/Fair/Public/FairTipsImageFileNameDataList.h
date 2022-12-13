#pragma once
#include "CoreMinimal.h"
#include "FairTipsImageFileName.h"
#include "ZDataTableDataAssetBase.h"
#include "FairTipsImageFileNameDataList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairTipsImageFileNameDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairTipsImageFileName> m_FairTipsImageFileName;
    
public:
    UFairTipsImageFileNameDataList();
};

