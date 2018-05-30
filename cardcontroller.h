#ifndef CARDCONTROLLER_H
#define CARDCONTROLLER_H

#include "card.h"
#include "handpile.h"
#include "tablepile.h"
#include "suitpile.h"
#include "darkpile.h"


class CardController
{
public:
    CardController();
    void initPiles();
    QList<TablePile> getTablePiles();

private:
    Card makeCardMachine();
    bool* usedCard = new bool[54]{false};
    HandPile handPile;
    DarkPile darkPile;
    QList<SuitPile> suitPiles;
    QList<TablePile> tablePiles;
};

#endif // CARDCONTROLLER_H
