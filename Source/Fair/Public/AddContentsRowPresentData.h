#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AddContentsRowPresentInfo.h"
#include "AddContentsRowPresentData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FAddContentsRowPresentData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AddContentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsRowPresentInfo> PresentInfoList;
    
    FAddContentsRowPresentData();
};

