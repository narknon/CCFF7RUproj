#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairMovieAudioVolumeListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairMovieAudioVolumeListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovieAudioVolume;
    
    FAIR_API FFairMovieAudioVolumeListTableRow();
};

