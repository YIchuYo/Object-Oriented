#include "darkpile.h"

DarkPile::DarkPile()
{
}

DarkPile::DarkPile(int num_Pile_, int loc_x_, int loc_y_){
    this->num_Pile = num_Pile_;
    this->loc_x = loc_x_;
    this->loc_y = loc_y_;
    this->mode = MODE;
}
