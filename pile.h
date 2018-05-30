#ifndef PILE_H
#define PILE_H

#include "card.h"
#include <QList>
class Pile{
public:
    Pile();
    Pile(int num_Pile,int loc_x,int loc_y);
    void addCard(Card& card);
    void addCards(QList<Card> &hand_List);
    void removeCards(QList<Card> &move_List);

    int getNumPile();
protected:
    int num_Pile; //牌堆号
    int loc_x;
    int loc_y;
    int height;
    int width;
    QList<Card> pile_List;
};

#endif // PILE_H
