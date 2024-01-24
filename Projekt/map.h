#ifndef MAP_H
#define MAP_H

#include "room.h"
#include "player.h"
#include "roomdirector.h"
#include <algorithm>

class Map:public QObject
{
    Q_OBJECT
    Q_PROPERTY(Player * player READ getPlayer CONSTANT)
    Q_PROPERTY(Room * room READ getRoom CONSTANT NOTIFY roomChanged)
    Q_PROPERTY(bool move READ  getMove CONSTANT NOTIFY moveChanged)
private:
    std::map<std::array<int,2>,Room*>m_map;
    Player * player;
    int m_roomX=0;
    int m_roomY=0;
    Room* m_room=nullptr;
    bool canMove=true;
    int m_pocetNepratel = 0;
public:
    explicit Map(QObject* parent=nullptr);
    void setRoom(std::array<int,2>whichRoom);
    Room * getRoom();
    Player * getPlayer();
    bool getMove();
    Q_INVOKABLE bool movingInMap(float moveX,float moveY, float distance);
    int getPocetNepratel();

signals:
    void roomChanged();
    void moveChanged();
public slots:
    void handleEnemyDefeated();
};

#endif // MAP_H
