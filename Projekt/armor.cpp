#include "armor.h"

Armor::Armor(int strenght,int demage,int xPosition, int yPosition):Items(strenght, demage,xPosition,yPosition)
{

}

void Armor::setDemage(unsigned int newDemage)
{
    m_demage=newDemage;
}
