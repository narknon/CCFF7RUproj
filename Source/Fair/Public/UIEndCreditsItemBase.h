#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIEndCreditsItemBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIEndCreditsItemBase : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TextObjectNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageObjectName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_usingTexture;
    
public:
    UUIEndCreditsItemBase();
};

