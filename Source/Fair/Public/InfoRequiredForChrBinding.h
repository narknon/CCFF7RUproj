#pragma once
#include "CoreMinimal.h"
#include "InfoRequiredForChrBinding.generated.h"

class AFairGmChrActor;

USTRUCT(BlueprintType)
struct FInfoRequiredForChrBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFairGmChrActor* Actor;
    
    FAIR_API FInfoRequiredForChrBinding();
};

