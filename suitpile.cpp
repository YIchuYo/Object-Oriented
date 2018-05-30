#include "suitpile.h"

SuitPile::SuitPile()
{
}

SuitPile::SuitPile(CardShape shape, int num_Pile, int loc_x, int loc_y){
    this->num_Pile = num_Pile;
    this->loc_x = loc_x;
    this->loc_y = loc_y;
    this->shape = shape;
}

bool SuitPile::isCompleted(){
    bool flag = true;
    for(int i=0;i<pile_List.size();i++){
        Card t = pile_List[i];
        if(t.getNum()!=i || t.getShape() != shape){
            flag = false;
            break;
        }
    }
    return flag;
}



//不用的函数
//构造方法1，由于SuitPile是存放最终完成的牌，给定Shape 和颜色
//根据牌堆的shape和color来检测是否完成了
//shape和color是想要的构造方法
//SuitPile::SuitPile(int num_Pile_, int loc_x_, int loc_y_){
//    this->num_Pile = num_Pile_;
//    this->loc_x = loc_x_;
//    this->loc_y = loc_y_;
//}
