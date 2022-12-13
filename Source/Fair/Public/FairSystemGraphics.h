#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairSystemGraphics.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairSystemGraphics : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_currentMonitorResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimizeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionChangeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultResolutionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFocus;
    
public:
    UFairSystemGraphics();
};

