#include "map.h"

Map::Map(QObject *parent) : QObject{parent}
{
    RoomDirector* roomDirector = new RoomDirector;
    player=new Player(1000, 10);
    player->getInventory()->pickGun(new Gun("Starting Weapon",10,0,0));
    player->getInventory()->pickArmor(new Armor("Starting Armor",40,0,0));
    player->getInventory()->pickPotion(new Potion("Heal Potion",250, 0,0));
    player->getInventory()->pickPotion(new Potion("Heal Potion",250, 0,0));

    for(int row=0;row<=3;row++){
        for(int column=0;column<=3;column++){
            m_map[{row,column}]=new Room;
            Room* currentRoom = m_map[{row,column}];
            //prvni mistnost se vyklidi a prida se do nej pozdeji NPC
            if(row == 0 && column == 0){
                roomDirector->clearRoom(currentRoom);
            }
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
            m_pocetNepratel += currentRoom->getPocetNepratel();
        }

    }
    setRoom(std::array<int,2>{m_roomX,m_roomY});
    roomDirector->addBoss(m_map[{3,3}],300,300);
    roomDirector->addNPC(m_map[{0, 0}], 250, 250, m_pocetNepratel);
    player->setRoom(getRoom());
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



bool Map::movingInMap(float moveX,float moveY, float distance) {

    int playerX = player->getXPosition();
    int playerY = player->getYPosition();

    if (moveX > 0) {
        playerX+=distance;
    } else if (moveX < 0) {
        playerX-=distance;
    }
    if (moveY > 0) {
        playerY+=distance;
    } else if (moveY < 0) {
        playerY-=distance;
    }
    if ((playerX>=550 || playerY >=420 || playerX<=0 || playerY<=0 ||(playerX>=535 && playerY>=400)||(playerX>=530 && playerY>=2))&& (!m_room->isEntrance(0,playerY) || !m_room->isEntrance(playerX,0)))
        return false;
    else{
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
            /*canMove=false;
            emit moveChanged();*/
        }
    }

    player->setRoom(getRoom());

    emit roomChanged();
    return true;
}


Room * Map::getRoom(){
    return m_room;
}

bool Map::getMove(){
    return canMove;
}

int Map::getPocetNepratel(){
    return m_pocetNepratel;
}

void Map::handleEnemyDefeated(){
    player->addKill();
}
