#pragma once
#include "CoreMinimal.h"
#include "FairAutoPlayExecutor.h"
#include "FairAutoPlayWaitExecutor.generated.h"

UCLASS(Blueprintable)
class UFairAutoPlayWaitExecutor : public UFairAutoPlayExecutor {
    GENERATED_BODY()
public:
    UFairAutoPlayWaitExecutor();
};

