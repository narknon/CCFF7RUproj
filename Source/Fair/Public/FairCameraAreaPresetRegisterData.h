#pragma once
#include "CoreMinimal.h"
#include "FairCameraAreaPresetData.h"
#include "FairCameraAreaPresetRegisterData.generated.h"

class UShapeComponent;

USTRUCT(BlueprintType)
struct FFairCameraAreaPresetRegisterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCameraAreaPresetData AreaPresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* pShapeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Overlapped;
    
    FAIR_API FFairCameraAreaPresetRegisterData();
};

