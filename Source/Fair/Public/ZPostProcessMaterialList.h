#pragma once
#include "CoreMinimal.h"
#include "EZPostProcessType.h"
#include "ZPostProcessMaterialInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "ZPostProcessMaterialList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UZPostProcessMaterialList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EZPostProcessType, FZPostProcessMaterialInfo> m_postProcessMaterialList;
    
public:
    UZPostProcessMaterialList();
};

