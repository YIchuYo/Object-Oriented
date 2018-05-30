#include "card.h"

Card::Card()
{
}

Card::Card(CardShape shape, int num){
    this->shape = shape;
    this->num = num;
}

Card::Card(CardShape shape_, int num_, int loc_x_, int loc_y_){
    this->shape = shape_;
    this->num = num_;
    this->loc_x = loc_x_;
    this->loc_y = loc_y_;
}


CardShape Card::getShape(){
    return shape;
}

int Card::getNum(){
    return num;
}


int Card::getLocX(){
    return loc_x;
}

int Card::getLocY(){
    return loc_y;
}

bool Card::getisBack(){
    return isBack;
}

void Card::setisBack(bool back){
    this->isBack = back;
}

bool Card::isSuit(Card& up)
{
    if(num < up.getNum()){
        return true;
    }else{
        return false;
    }
}
