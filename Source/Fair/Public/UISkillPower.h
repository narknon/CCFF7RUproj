#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UISkillPower.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUISkillPower : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScreenOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_3DPosOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_2DPosOffset;
    
public:
    UUISkillPower();
};

