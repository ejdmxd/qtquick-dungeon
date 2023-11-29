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
class Room:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant items READ getItems CONSTANT)
public:
    unsigned int m_windowWidth;
    unsigned int m_windowHeight;
    std::vector<std::vector<unsigned int>> m_map;
    std::vector<Items *> m_items;
public:
    explicit Room(QObject * parent=nullptr);
    void setMap();
    Q_INVOKABLE void setItems();
    void setWidth(int nieco);
    QVariant getItems();
    int generateRandomNumber(int range1, int range2);
signals:
    void itemsCrafted();
};

#endif // ROOM_H
