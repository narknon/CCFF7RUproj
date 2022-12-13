#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDebugProcessingLoadCheckCut.generated.h"

class UFairDebugProcessingLoadCheckCutList;

UCLASS(Blueprintable)
class FAIR_API UFairDebugProcessingLoadCheckCut : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDebugProcessingLoadCheckCutList* m_dDebugProcessingLoadCheckCutList;
    
    UFairDebugProcessingLoadCheckCut();
};

