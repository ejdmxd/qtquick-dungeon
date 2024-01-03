#include "roomdirector.h"

RoomDirector::RoomDirector(QObject *parent)
    : QObject{parent}
{

}

void RoomDirector::addRightEntrance(Room* room){
    room->removeWall(600, 250);
    room->addEntrance(600,250);
}

void RoomDirector::addLeftEntrance(Room* room){
    room->removeWall(0, 250);
    room->addEntrance(0,250);
}

void RoomDirector::addBottomEntrance(Room* room){
    room->removeWall(250, 500);
    room->addEntrance(250,500);
}

void RoomDirector::addTopEntrance(Room* room){
    room->removeWall(250, 0);
    room->addEntrance(250,0);
}
