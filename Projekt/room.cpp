#include "room.h"
#include <iostream>
#include "player.h"
#include <thread>
#include <mutex>
#include <map>


Room::Room(QObject *parent) : QObject{parent}
{
    setWidth(640);
    setBorders();
    setItems();
    setEnemies();
}


Q_INVOKABLE void Room::setItems()
{
    int prem=generateRandomNumber(0,3);
    for (int i=0;i<prem;i++){
        int number=generateRandomNumber(0,1);
        if (number == 1){
            m_items.push_back(new Armor("Common Armor",10,generateRandomNumber(50,550),generateRandomNumber(50,450)));
        } else{
            m_items.push_back(new Gun("Common Gun",20,generateRandomNumber(50,550),generateRandomNumber(50,450)));
        }
    }
    emit itemsCrafted();
}

Q_INVOKABLE void Room::setEnemies(){
    int prem = generateRandomNumber(2,4);
    EnemyDirector* generujem = new EnemyDirector;
    for (int i=0;i<prem;i++){
        int typeOfEnemy = generateRandomNumber(1,2);
        switch(typeOfEnemy){
        case 1:
            m_enemies.push_back(generujem->createZombie(generateRandomNumber(1,600),generateRandomNumber(1,450)));
            break;

        case 2:
            m_enemies.push_back(generujem->createSkeleton(generateRandomNumber(1,600),generateRandomNumber(1,450)));
            break;
        }


    }

}

void Room::setWidth(int cislo)
{
    m_windowWidth=cislo;
}


QVariant Room::getItems()
{
    return QVariant::fromValue(m_items);
}

QVariant Room::getEnemies()
{
    return QVariant::fromValue(m_enemies);
}

unsigned int Room::getWidth(){
    return m_windowWidth;
}

void Room::removeWall(int x, int y) {
    for (auto it = m_walls.begin(); it != m_walls.end(); ++it) {
        if ((*it)->getPositionX() == x && (*it)->getPositionY() == y) {
            it = m_walls.erase(it);
            break;
        }
    }
}

int Room::generateRandomNumber(int range1, int range2) {

    std::random_device rd;
    std::mt19937 gen(rd());


    std::uniform_int_distribution<> dis(range1, range2);


    int randomNumber = dis(gen);

    return randomNumber;
}

/*QVariant Room::getMap()
{
    return QVariant::fromValue(m_map);
}*/

void Room::setBorders()
{
    for(int y=0;y<=500;y=y+50){
        for (int x=0;x<=600;x=x+50){
            if (x==0 or y==0 or x==600 or y==500){
                addWall(x,y);

            }
        }

    }
}

void Room::addWall(int x, int y){
    m_walls.push_back(new Wall(x,y));
}


QVariant Room::getWalls(){
    return QVariant::fromValue(m_walls);
}


bool Room::isEntrance(int playerX, int playerY){
    for (auto it = m_entrance.begin(); it!=m_entrance.end(); it++){

        if (playerX!=0){
            if ((*it).at(0)-70<=playerX && (*it).at(0)+20>=playerX)
                return true;
        }
        else if (playerY!=0){
            if ((*it).at(1)-80<=playerY && (*it).at(1)>=playerY)
                return true;
            }

    }
    return false;
}


void Room::addEntrance(int posX,int posY)
{
    std::array<int,2> prem={posX,posY};
    m_entrance.push_back(prem);
}


void Room::checkClosestItem(Player *player){
    int pocetItemu = m_items.size();
    std::cout << pocetItemu << std::endl;
    std::vector<std::thread> m_threads;
    std::mutex lock;
    std::multimap<Items*, int>vzdalenostiItemu;
    auto lambda = [&lock, &vzdalenostiItemu, &player](Items* items, DistanceManager* distanceManager){
        lock.lock();
        int playerPositionX = player->getXPosition();
        int playerPositionY = player->getYPosition();
        float distance = distanceManager->calculateVector(items->getPositionX(), items->getPositionY(), playerPositionX, playerPositionY);
        vzdalenostiItemu.insert(std::pair<Items*, int>(items, distance));
        lock.unlock();
    };
    for(int i = 0; i < pocetItemu; i++){
            m_threads.push_back(std::thread(lambda, m_items.at(i), m_distanceManager));
    }
    for (auto &thread : m_threads) {
            thread.join();
    }
    for (auto it = vzdalenostiItemu.begin(); it != vzdalenostiItemu.end(); ++it) {
            std::cout << "Item: " << it->first << ", Distance: " << it->second << std::endl;
    }
    std::cout << "CHECKPOINT 3" << std::endl;
}
