#pragma once
#include "CoreMinimal.h"
#include "EFairGimmickMarkerAttachType.h"
#include "FairGimmickMarkerIconData.h"
#include "FairGimmickMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FFairGimmickMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString attachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairGimmickMarkerAttachType AttachType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairGimmickMarkerIconData> iconDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 boxArray;
    
    FAIR_API FFairGimmickMarkerData();
};

