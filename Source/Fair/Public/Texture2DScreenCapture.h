#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture2DDynamic.h"
#include "Texture2DScreenCapture.generated.h"

UCLASS(Blueprintable)
class UTexture2DScreenCapture : public UTexture2DDynamic {
    GENERATED_BODY()
public:
    UTexture2DScreenCapture();
};

