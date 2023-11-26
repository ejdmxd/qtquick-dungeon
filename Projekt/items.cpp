#include "items.h"

Items::Items(QObject *parent) : QObject{parent}{

}

Items::Items(unsigned int strenght, unsigned int demage){
    m_strenght=strenght;
    m_demage=demage;
}

unsigned int Items::getDemage(){
    return m_demage;
}

unsigned int Items::getStrenght(){
    return m_strenght;
}

QString Items::getName(){
    return m_name;
}


