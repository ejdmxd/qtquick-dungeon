#ifndef MAP_H
#define MAP_H

#include "room.h"
#include "player.h"
#include <algorithm>
class Map:public QObject
{
    Q_OBJECT
    Q_PROPERTY(Player * player READ getPlayer CONSTANT)
    Q_PROPERTY(Room * room READ getRoom CONSTANT NOTIFY roomChanged)
private:
    std::map<std::array<int,2>,Room*>m_map;
    Player * player;
    int m_roomX=0;
    int m_roomY=0;
    Room* m_room=nullptr;
public:
    explicit Map(QObject* parent=nullptr);
    void setRoom(std::array<int,2>whichRoom);
    Room * getRoom();
    Player * getPlayer();
    Q_INVOKABLE void startGame();
signals:
    void roomChanged();
};

#endif // MAP_H
