#pragma once
#include "CoreMinimal.h"
#include "FairMapSoundSetting.h"
#include "ZDataTableDataAssetBase.h"
#include "FairMapEnvSoundList.generated.h"

UCLASS(Blueprintable)
class UFairMapEnvSoundList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairMapSoundSetting> m_mapEnvSoundList;
    
public:
    UFairMapEnvSoundList();
};

