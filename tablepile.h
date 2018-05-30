#ifndef TABLEPILE_H
#define TABLEPILE_H

#include "pile.h"

class TablePile:public Pile
{
public:
    TablePile();
    TablePile(int num_Pile,int loc_x,int loc_y);
//    void addCards(QList<Card> &hand_List);
//    void removeCards(QList<Card> &move_List);

};

#endif // TABLEPILE_H
