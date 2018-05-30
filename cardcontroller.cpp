#include <stdio.h>
#include <stdlib.h>
#include "cardcontroller.h"
#include "tablepile.h"
#include "constant.h"
#include <QDebug>

#define random() (rand()%52)

CardController::CardController()
{
    initPiles();
}


QList<TablePile> CardController::getTablePiles(){
    return tablePiles;
}

Card CardController::makeCardMachine(){
//    for(int i=0;i<10;i++)
//         qDebug() << ("%d/n",rand());
    //0-12 为DIAMOND
    //13-25 为HEART
    //26-38 为CLUB
    //39-53 为SPADE
    int num = -1;
    while (true) {
        num = random();
        if(!usedCard[num]){
            usedCard[num]=true;
            break;
        }
    }
    num += 1;
    if(1<=num && num<=13){
        qDebug() << "DIAMOND" << num;
        Card a(CardShape::DIAMOND, num);
        return a;
    }
    else if(14<=num && num<=26){
        qDebug() << "HEART" << num - 13;
        Card a(CardShape::HEART, num - 13);
        return a;
    }
    else if(27<=num && num<=39){
        qDebug() << "CLUB" << num - 26;
        Card a(CardShape::CLUB, num - 26);
        return a;
    }
    else if(40<=num && num<=52){
        qDebug() << "SPADE" << num - 39;
        Card a(CardShape::SPADE, num - 39);
        return a;
    }
    else{
        Card a;
        return a;
    }
}


void CardController::initPiles(){
    // 24张牌，放入Dark堆
    // 28张牌，放入Table堆
//    HandPile hp(0,10,10);
//    handPile = hp;
    DarkPile dp(1,20,20);
    darkPile = dp;
    for(int i = 0;i<24;i++){
        Card tem = makeCardMachine();
        darkPile.addCard(tem);
    }
    for(int i = 2; i < 9;i++){
        TablePile tp(i, 50, 50);
        tablePiles.append(tp);
        Card tem = makeCardMachine();
        for(int j = 0; j < i - 1; j++)
            tablePiles[j].addCard(tem);
    }
//    for(int i = 9; i < 13; i++){
//        SuitPile sp(CardShape::CLUB, i, 50+i*10, 50);
//        suitPiles.append(sp);
//    }
}
