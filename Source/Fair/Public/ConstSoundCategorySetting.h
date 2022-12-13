#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ConstSoundCategorySetting.generated.h"

USTRUCT(BlueprintType)
struct FConstSoundCategorySetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultConfigVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InMenuVolumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InPauseVolumeRate;
    
    FAIR_API FConstSoundCategorySetting();
};

