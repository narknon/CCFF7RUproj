#include "ManaMovie.h"

bool UManaMovie::Validate() const {
    return false;
}

FString UManaMovie::GetUrl() const {
    return TEXT("");
}

int32 UManaMovie::GetMaxPictureDataSize() const {
    return 0;
}

UManaMovie::UManaMovie() {
    this->NumSubtitleChannels = 0;
    this->MaxSubtitleSize = 0;
    this->MinBufferSize = 0;
    this->MaxChunkSize = 0;
    this->bIsAlpha = false;
}

