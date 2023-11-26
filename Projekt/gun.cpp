#include "gun.h"

Gun::Gun(unsigned int strenght, unsigned int demage):Items(strenght,demage)
{
    m_bullets=50;
}


void Gun::setStrenght()
{
    if(m_demage>=50){
        m_strenght-=1;
    }
}

unsigned int Gun::getBullets(){
    return m_bullets;
}

void Gun::shotBullet(){
    m_bullets-=1;
}
