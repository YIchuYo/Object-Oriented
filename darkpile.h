#ifndef DARKPILE_H
#define DARKPILE_H

#include "pile.h"
#include "constant.h"

class DarkPile:public Pile
{
public:
    DarkPile();
    DarkPile(int num_Pile,int loc_x,int loc_y);

private:
    int mode = 0;
};

#endif // DARKPILE_H
