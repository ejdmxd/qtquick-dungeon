#include "armor.h"

Armor::Armor(unsigned int strenght, unsigned int demage):Items(strenght, demage)
{

}

void Armor::setDemage(unsigned int newDemage)
{
    m_demage=newDemage;
}


