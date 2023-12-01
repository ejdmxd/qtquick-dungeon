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
        player->movePlayer("right",-player->getXPosition());
        setRoom(std::array<int,2>{m_roomY,m_roomX});

    }else if(player->getYPosition()==450 && m_roomY<3){
        m_roomY++;
        player->movePlayer("down",-player->getYPosition());
        setRoom(std::array<int,2>{m_roomY,m_roomX});

    }else if(player->getXPosition()==0 && m_roomX>0){
        m_roomX--;
        player->movePlayer("left",-600);
        setRoom(std::array<int,2>{m_roomY,m_roomX});

    }else if(player->getYPosition()==0 && m_roomY>0){
        m_roomY--;
        player->movePlayer("top",-450);
        setRoom(std::array<int,2>{m_roomY,m_roomX});


    }else{
        std::cout<<"x="<<player->getXPosition()<<"y="<<player->getYPosition()<<std::endl;
        std::cout<<"roomX= "<<m_roomX<<"roomY= "<<m_roomY<<std::endl;
    }
    emit roomChanged();
}

Room * Map::getRoom(){
    return m_room;
}
