#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIMailInfo.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIMailInfo : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_usingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_materialInstance;
    
public:
    UUIMailInfo();
};

