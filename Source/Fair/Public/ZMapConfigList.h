#pragma once
#include "CoreMinimal.h"
#include "ZMapConfigLevelInfoArray.h"
#include "ZDataTableDataAssetBase.h"
#include "ZMapConfigList.generated.h"

UCLASS(Blueprintable)
class UZMapConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FZMapConfigLevelInfoArray> m_mapConfigList;
    
public:
    UZMapConfigList();
};

