#pragma once
#include "CoreMinimal.h"
#include "FairElementMaterialSet.generated.h"

USTRUCT(BlueprintType)
struct FFairElementMaterialSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName element_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> slot_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> capsule_names;
    
    FAIR_API FFairElementMaterialSet();
};

