#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDistanceWeight.h"
#include "ForcePoints.generated.h"

USTRUCT(BlueprintType)
struct CASCADEEXTENSIONPLUGIN_API FForcePoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PointLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistanceWeight::Type> SeparationDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScale;
    
    FForcePoints();
};

