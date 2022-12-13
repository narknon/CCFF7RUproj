#pragma once
#include "CoreMinimal.h"
#include "AddContentsPresentInfo.h"
#include "AddContentsPresentData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FAddContentsPresentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AddContentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsPresentInfo> PresentInfoList;
    
    FAddContentsPresentData();
};

