#pragma once
#include "CoreMinimal.h"
#include "ZShadowQualityConfigListDataTableRow.h"
#include "ZDataTableDataAssetBase.h"
#include "ZShadowQualityConfigList.generated.h"

UCLASS(Blueprintable)
class UZShadowQualityConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FZShadowQualityConfigListDataTableRow> m_shadowQualityConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_shadowQualityDefaultPresetName;
    
public:
    UZShadowQualityConfigList();
};

