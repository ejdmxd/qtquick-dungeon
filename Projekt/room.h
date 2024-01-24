#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <QVariant>
#include <thread>
#include <mutex>
#include <map>
#include <random>
#include "gun.h"
#include "armor.h"
#include "enemydirector.h"
#include "wall.h"
#include "distancemanager.h"
#include "nonplayablecharacter.h"

class Player;

class Room:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant items READ getItems NOTIFY itemPicked)
    Q_PROPERTY(QVariant enemies READ getEnemies CONSTANT)
    Q_PROPERTY(QVariant walls READ getWalls CONSTANT)
    Q_PROPERTY(NonPlayableCharacter* npc READ getNPC CONSTANT)

private:
    unsigned int m_windowWidth;
    unsigned int m_windowHeight;
    unsigned int m_pocetNepratel = 0;

    std::vector<Wall *>m_walls;
    std::vector<Items *> m_items;
    std::vector<Enemy *> m_enemies;
    std::vector<std::array<int,2>> m_entrance;
    Items* m_closestItem;
    DistanceManager* m_distanceManager;
    NonPlayableCharacter* m_npc = NULL;
public:
    explicit Room(QObject * parent=nullptr);
    Q_INVOKABLE void setItems();
    Q_INVOKABLE void setEnemies();
    Q_INVOKABLE void updateEnemy(int index,int value, Player* player);
    QVariant getItems();
    QVariant getEnemies();

    //Metody upravujici mistnost
    void setWidth(int nieco);
    void removeWall(int x, int y);
    void addWall(int x, int y);
    void setBorders();

    int generateRandomNumber(int range1, int range2);
    QVariant getMap();
    QVariant getWalls();
     unsigned int getWidth();

    bool isEntrance(int playerX,int playerY);
    void addEntrance(int posX,int posY);
    //Pomoci vlaken se urci nejlbizsi predmet k hraci
    void checkClosestItem(Player* player);
    void setClosestItem(std::multimap<Items*, int> vzdalenostiItemu, Player *player);
    Items* getClosestItem() const;
    //Pokud hrac zvednul predmet, odstrani se z mistnosti
    void playerPickedItem(Items* itemToRemove);

    //Kazda mistnost ma v sobe pocet, kolik vytvori nepratel
    unsigned int getPocetNepratel() const;
    void clearRoom();

    //Metody pridavajici npc do mistnosti
    void setNPC(NonPlayableCharacter* npc);
    NonPlayableCharacter* getNPC() const;
    void npcInteraction(Player* player);
    
signals:
    void itemsCrafted();
    void itemPicked();
};

#endif // ROOM_H
