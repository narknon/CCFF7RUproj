#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairMapEnvSoundListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairMapEnvSoundListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString envSoundCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dspBusSnapShotName;
    
    FAIR_API FFairMapEnvSoundListTableRow();
};

