#pragma once
#include "CoreMinimal.h"
#include "FairElementMaterialSet.h"
#include "FairModelElementMaterialSet.generated.h"

USTRUCT(BlueprintType)
struct FFairModelElementMaterialSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName model_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairElementMaterialSet> element_material_sets;
    
    FAIR_API FFairModelElementMaterialSet();
};

