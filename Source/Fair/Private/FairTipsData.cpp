#include "FairTipsData.h"

FFairTipsData::FFairTipsData() {
    this->ID = 0;
    this->image_type = EUITipsImageType::None;
    this->image_id = 0;
    this->mail_index = 0;
    this->mail_folder = 0;
    this->mail_seq = 0;
    this->story_count = 0;
    this->force_view = false;
    this->mail_take_over = false;
    this->no_flag_take_over = false;
}

