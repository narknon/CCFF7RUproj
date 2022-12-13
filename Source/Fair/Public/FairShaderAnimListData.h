#pragma once
#include "CoreMinimal.h"
#include "FairShaderAnimList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairShaderAnimListData.generated.h"

UCLASS(Blueprintable)
class UFairShaderAnimListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairShaderAnimList> m_ShaderAnimList;
    
public:
    UFairShaderAnimListData();
};

