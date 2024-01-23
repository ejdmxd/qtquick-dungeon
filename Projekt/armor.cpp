#include "armor.h"

Armor::Armor(QString armorName, int def,int xPosition, int yPosition):Items(xPosition,yPosition)
{
    m_def = def;
    m_name = armorName;
}

void Armor::setDef(unsigned int newDef)
{
    m_def = newDef;
}

int Armor::getDef(){
    return m_def;
}

QString Armor::getName(){
    return m_name;
}
