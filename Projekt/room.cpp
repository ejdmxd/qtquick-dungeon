#include "room.h"

Room::Room(QObject *parent) : QObject{parent}
{
    setWidth(640);
    setMap();
    setItems();
    setEnemies();
}

void Room::setMap(){
    std::vector<int>prem(m_windowWidth);
    std::vector<std::vector<int>>pom(m_windowWidth,prem);
    m_map=pom;
}

Q_INVOKABLE void Room::setItems()
{
    int prem=generateRandomNumber(0,3);
    for (int i=0;i<prem;i++){
        int number=generateRandomNumber(0,1);
        if (number)
            m_items.push_back(new Armor(10,10,generateRandomNumber(1,600),generateRandomNumber(1,600)));
        else
            m_items.push_back(new Gun(10,10,generateRandomNumber(1,600),generateRandomNumber(1,600)));
    }
    //std::cout<<m_items.at(0)->getPositionX()<<m_items.at(0)->getPositionY()<<std::endl;
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

int Room::generateRandomNumber(int range1, int range2) {

    std::random_device rd;
    std::mt19937 gen(rd());


    std::uniform_int_distribution<> dis(range1, range2);


    int randomNumber = dis(gen);

    return randomNumber;
}

QVariant Room::getMap()
{
    return QVariant::fromValue(m_map);
}

void Room::setBorders()
{
    for(int x=0;x<=m_windowWidth;x++){
        for (int y=0;y<=m_windowWidth;y++){
            if (x==0 or y==0 or x==m_windowWidth or y==m_windowWidth){
                m_map[y][x]=-1;
            }
        }

    }
}
