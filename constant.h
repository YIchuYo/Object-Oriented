#ifndef CONSTANT_H
#define CONSTANT_H
#include <QString>
//牌的形状
enum class CardShape{
    DIAMOND=0, HEART=1, CLUB=2, SPADE=3
};
//牌色
//enum class CardColor{
//    BLACK=0,RED=1
//};

//struct Constant{
//public:
//    Constant(){
//        mode = 0;
//        pile_count = 0;
//    }
//    static int pile_count;
//};

    //mode 0 = 简单模式
    //mode 1 = 困难模式
    static int MODE = 0;



#endif // CONSTANT_H
