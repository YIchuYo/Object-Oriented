#include "pile.h"
#include <QDebug>

Pile::Pile(){
}

Pile::Pile(int num_Pile_, int loc_x_, int loc_y_){
    this->num_Pile = num_Pile_;
    this->loc_x = loc_x_;
    this->loc_y = loc_y_;
}

int Pile::getNumPile(){
    return num_Pile;
}

void Pile::addCard(Card &card){
    pile_List.append(card);
}

void Pile::addCards(QList<Card> &hand_List){
    pile_List.append(hand_List);
    qDebug() << "parent method";
}

void Pile::removeCards(QList<Card> &move_List){
    int num_del = -1;
    int length_plie = pile_List.size();
    for(int i=0; i<length_plie; i++){
        if(&pile_List[i]==&move_List[0]){
            num_del = i;
        }
    }
    for(int i=num_del;i<length_plie; i++){
        pile_List.removeLast();
    }
}
