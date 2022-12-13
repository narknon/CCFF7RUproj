#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairElementMaterialSetForEditor.h"
#include "FairModelElementMaterialSetList_DataTableRow.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFairModelElementMaterialSetList_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairElementMaterialSetForEditor> element_material_sets;
    
    FAIR_API FFairModelElementMaterialSetList_DataTableRow();
};

