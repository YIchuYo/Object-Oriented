#ifndef HANDPILE_H
#define HANDPILE_H

#include "pile.h"

class HandPile:public Pile
{
public:
    HandPile();
    HandPile(int num_Pile,int loc_x,int loc_y);
};

#endif // HANDPILE_H
