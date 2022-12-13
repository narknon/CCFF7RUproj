#pragma once
#include "CoreMinimal.h"
#include "ZAntiAliasingConfigListDataTableRow.h"
#include "ZDataTableDataAssetBase.h"
#include "ZAntiAliasingConfigList.generated.h"

UCLASS(Blueprintable)
class UZAntiAliasingConfigList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FZAntiAliasingConfigListDataTableRow> m_antiAliasingConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_antiAliasingDefaultPresetName;
    
public:
    UZAntiAliasingConfigList();
};

