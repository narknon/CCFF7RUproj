#include "FairRichTextBlock.h"

UFairRichTextBlock::UFairRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->m_bFitText = false;
    this->m_FitTextAt = 0.00f;
}

