#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UVOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FUVOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    FUVOffsetData();
};

