#include "FairMotionParam.h"

FFairMotionParam::FFairMotionParam() {
    this->motID = 0;
    this->discimgIndex = 0;
    this->nb_frame = 0;
    this->nb_element = 0;
    this->nb_event = 0;
    this->transelem = 0;
    this->flag = 0;
    this->iscamera = 0;
    this->cameraelem = 0;
    this->minmax = 0;
    this->flags = 0;
    this->Data = 0;
    this->events = 0;
    this->mulrot = 0.00f;
    this->nb_cameracrv = 0;
    this->Version = 0;
    this->pivot = 0;
    this->offsetx = 0.00f;
    this->offsety = 0.00f;
    this->offsetz = 0.00f;
}

