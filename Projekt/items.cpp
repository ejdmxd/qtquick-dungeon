#include "items.h"

Items::Items(QObject *parent) : QObject{parent}{

}

Items::Items(int strenght, int demage,int xPosition,int yPosition){
    m_strenght=strenght;
    m_demage=demage;
    position=new Position();
    position->setXValue(xPosition);
    position->setYValue(yPosition);
    m_xPosition=position->getXValue();
    m_yPosition=position->getYValue();
}

unsigned int Items::getDemage(){
    return m_demage;
}

unsigned int Items::getStrenght(){
    return m_strenght;
}

QString Items::getName(){
    return m_name;
}

int Items::getPositionX(){
    return m_xPosition;
}

int Items::getPositionY(){
    return m_yPosition;
}

