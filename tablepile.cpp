#include "tablepile.h"
#include <iostream>
#include <QDebug>

TablePile::TablePile()
{
}

TablePile::TablePile(int num_Pile_, int loc_x_, int loc_y_){
    this->num_Pile = num_Pile_;
    this->loc_x = loc_x_;
    this->loc_y = loc_y_;
}




//void TablePile::addCards(QList<Card> &hand_List){
//    pile_List.append(hand_List);
//}

//void TablePile::removeCards(QList<Card> &move_List){
//    int num_del = -1;
//    int length_plie = pile_List.size();
//    for(int i=0; i<length_plie; i++){
//        if(&pile_List[i]==&move_List[0]){
//            num_del = i;
//        }
//    }
//    for(int i=num_del;i<length_plie; i++){
//        pile_List.removeLast();
//    }
//}
