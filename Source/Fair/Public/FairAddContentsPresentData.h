#pragma once
#include "CoreMinimal.h"
#include "AddContentsPresentData.h"
#include "ZDataTableDataAssetBase.h"
#include "FairAddContentsPresentData.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairAddContentsPresentData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsPresentData> m_AddContentsPresentDataList;
    
public:
    UFairAddContentsPresentData();
};

