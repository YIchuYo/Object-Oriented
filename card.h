#ifndef CARD_H
#define CARD_H

#include "constant.h"

class Card
{
public:
    Card();
    Card(CardShape shape_, int num);
    Card(CardShape shape_, int num, int loc_x,
         int loc_y);
    CardShape getShape();
    int getNum();
    int getLocX();
    int getLocY();
    bool getisBack();
    void setisBack(bool back);
    bool isSuit(Card& up);
private:
    CardShape shape;
    int num;
    int loc_x;
    int loc_y;
    int height=200;
    int width=50;
    bool isBack = true;
};

#endif // CARD_H
