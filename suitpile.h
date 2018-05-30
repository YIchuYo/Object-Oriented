#ifndef SUITPILE_H
#define SUITPILE_H

#include "pile.h"

class SuitPile:public Pile
{
public:
    SuitPile();
//    SuitPile(int num_Pile,int loc_x,int loc_y);
    SuitPile(CardShape shape, int num_Pile,int loc_x,int loc_y);
    bool isCompleted();

private:
    CardShape shape;
};

#endif // SUITPILE_H
