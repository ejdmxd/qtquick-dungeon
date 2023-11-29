#include "room.h"

Room::Room(QObject *parent) : QObject{parent}
{
    setWidth(640);
    setMap();
    setItems();
}

void Room::setMap(){
    std::vector<unsigned int>prem(m_windowWidth/20);
    std::vector<std::vector<unsigned int>>pom(m_windowWidth/20,prem);
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

void Room::setWidth(int cislo)
{
    m_windowWidth=cislo;
}


QVariant Room::getItems()
{
    return QVariant::fromValue(m_items);
}

int Room::generateRandomNumber(int range1, int range2) {

    std::random_device rd;
    std::mt19937 gen(rd());


    std::uniform_int_distribution<> dis(range1, range2);


    int randomNumber = dis(gen);

    return randomNumber;
}
