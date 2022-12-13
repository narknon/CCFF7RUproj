#pragma once
#include "CoreMinimal.h"
#include "FairMovieInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairMovieInfoList.generated.h"

UCLASS(Blueprintable)
class UFairMovieInfoList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairMovieInfo> m_movieInfoList;
    
public:
    UFairMovieInfoList();
};

