#include "items.h"

Items::Items(QObject *parent) : QObject{parent}{

}

Items::Items(int xPosition,int yPosition){
    position=new Position();
    position->setXValue(xPosition);
    position->setYValue(yPosition);

}

QString Items::getName() const{
    return m_name;
}

int Items::getPositionX(){
    return position->getXValue();
}

int Items::getPositionY(){
    return position->getYValue();
}

