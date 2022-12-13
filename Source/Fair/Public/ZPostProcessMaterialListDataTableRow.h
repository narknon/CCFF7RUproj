#pragma once
#include "CoreMinimal.h"
#include "EZPostProcessType.h"
#include "Engine/DataTable.h"
#include "ZPostProcessMaterialListDataTableRow.generated.h"

class UObject;
class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FZPostProcessMaterialListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZPostProcessType material_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* post_process_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* material_parameter_collection;
    
    FAIR_API FZPostProcessMaterialListDataTableRow();
};

