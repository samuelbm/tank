#include "tourelle.h"


tourelle::~tourelle(){

}

void tourelle::init(){
    this->setTransformOriginPoint(13,55);
}

void tourelle::move(sens p_sens){
    switch(p_sens){
    case CW:
        this->clock_wise();
        break;
    case CCW:
        this->counter_clock_wise();
        break;
    }

}

void tourelle::clock_wise(){
    qreal rotat = this->rotation();
    this->setRotation(rotat + 1);
}

void tourelle::counter_clock_wise(){
    qreal rotat = this->rotation();
    this->setRotation(rotat + 1);
}

