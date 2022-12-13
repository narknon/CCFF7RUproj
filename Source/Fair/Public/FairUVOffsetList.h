#pragma once
#include "CoreMinimal.h"
#include "UVOffsetData.h"
#include "FairBaseWidgetItem.h"
#include "FairUVOffsetList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairUVOffsetList : public UFairBaseWidgetItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUVOffsetData> UVOffsetParamList;
    
public:
    UFairUVOffsetList();
};

