#pragma once
#include "CoreMinimal.h"
#include "ZPostProcessMaterialInfo.generated.h"

class UObject;
class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FZPostProcessMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* post_process_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* material_parameter_collection;
    
    FAIR_API FZPostProcessMaterialInfo();
};

