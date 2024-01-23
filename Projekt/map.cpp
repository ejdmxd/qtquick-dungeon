#include "map.h"

Map::Map(QObject *parent) : QObject{parent}
{
    RoomDirector* roomDirector = new RoomDirector;
    player=new Player(1000, 5);
    player->getInventory()->pickGun(new Gun("Starting weapon",10,0,0));
    player->getInventory()->pickArmor(new Armor("Common armor",15,0,0));

    for(int row=0;row<=3;row++){
        for(int column=0;column<=3;column++){
            m_map[{row,column}]=new Room;
            Room* currentRoom = m_map[{row,column}];
            if (row > 0 && row < 4) {
                roomDirector->addTopEntrance(currentRoom);

            }
            if (row < 3) {
                roomDirector->addBottomEntrance(currentRoom);
            }
            if (column > 0  && column < 4) {
                roomDirector->addLeftEntrance(currentRoom);
            }
            if (column < 3) {
                roomDirector->addRightEntrance(currentRoom);
            }
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



void Map::movingInMap() {
    int playerX = player->getXPosition();
    int playerY = player->getYPosition();

    if (playerX >= 600 && m_roomX < 3 && m_room->isEntrance(0,playerY) ) {
        m_roomX++;
        player->movePlayer(1, 0, -580);
        setRoom(std::array<int, 2>{m_roomY, m_roomX});

    } else if (playerY >= 480 && m_roomY < 3 && m_room->isEntrance(playerX,0)) {
        m_roomY++;
        player->movePlayer(0,1,-460);
        setRoom(std::array<int, 2>{m_roomY, m_roomX});
    } else if (playerX <= 0 && m_roomX > 0 && m_room->isEntrance(0,playerY)) {
        m_roomX--;
        player->movePlayer(-1, 0, -580);
        setRoom(std::array<int, 2>{m_roomY, m_roomX});
    } else if (playerY <= 0 && m_roomY > 0 && m_room->isEntrance(playerX,0)) {
        m_roomY--;
        player->movePlayer(0, -1, -460);
        setRoom(std::array<int, 2>{m_roomY, m_roomX});
    }else{
        canMove=false;
        emit moveChanged();
    }


    // std::cout << "Miestonost x" << m_roomX << " Miestnost y" << m_roomY << std::endl;
    emit roomChanged();
}


Room * Map::getRoom(){
    return m_room;
}

bool Map::getMove(){
    return canMove;
}
