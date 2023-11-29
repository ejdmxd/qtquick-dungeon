#ifndef MAP_H
#define MAP_H

#include "room.h"
#include "player.h"
#include <algorithm>>
class Map:public QObject
{
    Q_OBJECT
    Q_PROPERTY(Player * player READ getPlayer CONSTANT)
    Q_PROPERTY(Room * room READ getRoom CONSTANT)
private:
    std::map<std::array<int,2>,Room*>m_map;
    Player * player;
public:
    explicit Map(QObject* parent=nullptr);
    Room * getRoom(std::array<int,2>whichRoom={1,0});
    Player * getPlayer();
    void setRoom();
};

#endif // MAP_H
