#pragma once
#include "CoreMinimal.h"
#include "FairDefinitionForEachPlatformInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDefinitionForEachPlatformListData.generated.h"

UCLASS(Blueprintable)
class UFairDefinitionForEachPlatformListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDefinitionForEachPlatformInfo> m_DefinitionForEachPlatformInfoList;
    
public:
    UFairDefinitionForEachPlatformListData();
};

