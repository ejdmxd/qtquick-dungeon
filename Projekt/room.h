#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <QVariant>
#include <random>
#include "gun.h"
#include "armor.h"
#include "enemydirector.h"
#include "wall.h"
class Room:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant items READ getItems CONSTANT)
    Q_PROPERTY(QVariant enemies READ getEnemies CONSTANT)
    Q_PROPERTY(QVariant walls READ getWalls CONSTANT)

public:
    unsigned int m_windowWidth;
    unsigned int m_windowHeight;

    std::vector<Wall *>m_walls;
    std::vector<Items *> m_items;
    std::vector<Enemy *> m_enemies;
    std::vector<std::array<int,2>> m_entrance;
public:
    explicit Room(QObject * parent=nullptr);
    Q_INVOKABLE void setItems();
    Q_INVOKABLE void setEnemies();
    void setWidth(int nieco);
    QVariant getItems();
    QVariant getEnemies();
    unsigned int getWidth();
    void removeWall(int x, int y);
    int generateRandomNumber(int range1, int range2);
    QVariant getMap();
    void setBorders();
    void addWall(int x, int y);
    QVariant getWalls();
    bool isEntrance(int playerX,int playerY);
    void addEntrance(int posX,int posY);


signals:
    void itemsCrafted();
};

#endif // ROOM_H
