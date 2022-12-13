#pragma once
#include "CoreMinimal.h"
#include "FairModelElementMaterialSet.h"
#include "ZDataTableDataAssetBase.h"
#include "FairModelElementMaterialSetList.generated.h"

UCLASS(Blueprintable)
class UFairModelElementMaterialSetList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairModelElementMaterialSet> m_modelElementMaterialSetList;
    
public:
    UFairModelElementMaterialSetList();
};

