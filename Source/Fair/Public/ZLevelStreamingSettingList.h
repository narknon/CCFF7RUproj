#pragma once
#include "CoreMinimal.h"
#include "ZLevelStreamingSetting.h"
#include "ZDataTableDataAssetBase.h"
#include "ZLevelStreamingSettingList.generated.h"

UCLASS(Blueprintable)
class UZLevelStreamingSettingList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FZLevelStreamingSetting> m_levelStreamingSettingList;
    
public:
    UZLevelStreamingSettingList();
};

