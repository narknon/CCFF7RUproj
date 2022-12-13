#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairBaseWidget.h"
#include "UICommandMateria.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUICommandMateria : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_Command4Ver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_Command6Ver;
    
public:
    UUICommandMateria();
};

