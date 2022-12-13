#pragma once
#include "CoreMinimal.h"
#include "ZDataTableDataAssetBase.h"
#include "FairMovieAudioVolumeList.generated.h"

UCLASS(Blueprintable)
class UFairMovieAudioVolumeList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> m_movieAudoVolumeList;
    
public:
    UFairMovieAudioVolumeList();
};

