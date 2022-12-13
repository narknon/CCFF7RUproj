#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDebugEventJump.generated.h"

class UFairDebugEventJumpList;

UCLASS(Blueprintable)
class FAIR_API UFairDebugEventJump : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDebugEventJumpList* m_debugEventJumpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_lastChoiceEventJump_unique_id;
    
    UFairDebugEventJump();
};

