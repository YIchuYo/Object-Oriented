#pragma execution_character_set("utf-8")
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "card.h"
#include <QDebug>
#include <QList>
#include <QString>
#include <QTextCodec>
#include "cardcontroller.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/Main1.qml")));

    /**
     * @brief card
     * test1:TablePile & card
     */

//    Card card(CardShape::HEARTS,CardColor::RED,5,20,50);
//    TablePile a(3,20,20);
//    QList<Card> q;
//    q.append(card);
//    a.addCards(q);


    CardController cc;
    QList<TablePile> qtb = cc.getTablePiles();
//    qDebug() << qtb[4].getNumPile();
//    cc.initPiles();
//    cc.makeCardMachine();
    return app.exec();
}
