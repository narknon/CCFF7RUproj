#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIPicture.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIPicture : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_textureTable;
    
public:
    UUIPicture();
};

