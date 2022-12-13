#include "ManaTexture.h"

class UManaSource;

void UManaTexture::SetMovieSource(UManaSource* InSource) {
}

UManaTexture::UManaTexture() {
    this->MovieSource = NULL;
    this->bRenderToTexture = false;
    this->TargetGamma = 0.00f;
    this->bHDR = false;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->bOverrideDimensions = false;
    this->OverrideFormat = PF_Unknown;
}

