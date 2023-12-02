#include "map.h"

Map::Map(QObject *parent) : QObject{parent}
{
    player=new Player;
    for(int row=0;row<=3;row++){
        for(int column=0;column<=3;column++){
            m_map[{row,column}]=new Room;
        }

    }
    setRoom(std::array<int,2>{m_roomX,m_roomY});
}

void Map::setRoom(std::array<int,2>whichRoom){
    auto range=m_map.equal_range(whichRoom);
    for (auto it = range.first; it != range.second; ++it) {
        m_room=it->second;
    }
}

Player *Map::getPlayer()
{
    return player;
}

void Map::startGame(){

    if (player->getXPosition()==600 && m_roomX<3){
        m_roomX++;
        std::cout<<"som Tuuuuuuu"<<std::endl;
        player->movePlayer("right",-580);
        setRoom(std::array<int,2>{m_roomY,m_roomX});

    }else if(player->getYPosition()==480 && m_roomY<3){
        m_roomY++;
        player->movePlayer("down",-460);
        setRoom(std::array<int,2>{m_roomY,m_roomX});

    }else if(player->getXPosition()==0 && m_roomX>0){
        m_roomX--;
        player->movePlayer("left",-580);
        setRoom(std::array<int,2>{m_roomY,m_roomX});

    }else if(player->getYPosition()==0 && m_roomY>0){
        m_roomY--;
        player->movePlayer("up",-450);
        setRoom(std::array<int,2>{m_roomY,m_roomX});
    }
    std::cout<<"Miestonost x"<<m_roomX<<" Miestnost y"<<m_roomY<<std::endl;
    emit roomChanged();
}

Room * Map::getRoom(){
    return m_room;
}
