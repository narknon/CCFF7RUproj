#pragma once
#include "CoreMinimal.h"
#include "FairCharacterParameterParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharacterParameterDataList.generated.h"

UCLASS(Blueprintable)
class UFairCharacterParameterDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharacterParameterParameter> m_parameterDataList;
    
public:
    UFairCharacterParameterDataList();
};

