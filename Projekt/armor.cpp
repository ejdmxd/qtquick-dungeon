#include "armor.h"

Armor::Armor(int strenght,int demage,int xPosition, int yPosition):Items(strenght, demage,xPosition,yPosition)
{
    m_name="Armor";
}

void Armor::setDemage(unsigned int newDemage)
{
    m_demage=newDemage;
}
