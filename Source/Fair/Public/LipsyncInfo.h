#pragma once
#include "CoreMinimal.h"
#include "LipsyncInfo.generated.h"

class ULipsAtomAnalyzer;

USTRUCT(BlueprintType)
struct FLipsyncInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULipsAtomAnalyzer* analyzer;
    
    FAIR_API FLipsyncInfo();
};

