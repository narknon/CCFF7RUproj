#pragma once
#include "CoreMinimal.h"
#include "FairGimmickMarkerParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairGimmickMarkerDataList.generated.h"

UCLASS(Blueprintable)
class UFairGimmickMarkerDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairGimmickMarkerParameter> m_GimmickMarkerDataList;
    
public:
    UFairGimmickMarkerDataList();
};

