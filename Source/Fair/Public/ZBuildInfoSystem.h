#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZBuildInfoSystem.generated.h"

UCLASS(Blueprintable)
class FAIR_API UZBuildInfoSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mBuildDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mBuildConfig;
    
public:
    UZBuildInfoSystem();
};

