#pragma once
#include "CoreMinimal.h"
#include "EZAntiAliasingCategory.h"
#include "ZAntiAliasingConfig.generated.h"

USTRUCT(BlueprintType)
struct FZAntiAliasingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAntiAliasingCategory AACategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetName;
    
    FAIR_API FZAntiAliasingConfig();
};

