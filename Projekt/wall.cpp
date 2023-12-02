#include "wall.h"

Wall::Wall(QObject *parent) : QObject{parent}
{

}

Wall::Wall(int positionX, int positionY){
    position=new Position;
    position->setXValue(-position->getXValue()+positionX);
    position->setYValue(-position->getYValue()+positionY);
}

int Wall::getPositionX()
{
    return position->getXValue();
}

int Wall::getPositionY()
{
    return position->getYValue();
}
