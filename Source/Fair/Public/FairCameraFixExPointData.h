#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairCameraFixExPointData.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraFixExPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtOffset;
    
    FAIR_API FFairCameraFixExPointData();
};

