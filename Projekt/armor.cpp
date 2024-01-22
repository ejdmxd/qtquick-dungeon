#include "armor.h"

Armor::Armor(int def,int xPosition, int yPosition):Items(xPosition,yPosition)
{
    m_def = def;
    m_name="Armor";
}

void Armor::setDef(unsigned int newDef)
{
    m_def = newDef;
}

int Armor::getDef(){
    return m_def;
}
