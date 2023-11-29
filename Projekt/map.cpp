#include "map.h"

Map::Map(QObject *parent) : QObject{parent}
{
    player=new Player;
    for(int row=0;row<2;row++){
        for(int column=0;column<3;column++){
            m_map[{row,column}]=new Room;
        }

    }
}

Room *Map::getRoom(std::array<int,2>whichRoom){
    auto range=m_map.equal_range(whichRoom);
    for (auto it = range.first; it != range.second; ++it) {
        return it->second;
    }
    return nullptr;
}

Player *Map::getPlayer()
{
    return player;
}
