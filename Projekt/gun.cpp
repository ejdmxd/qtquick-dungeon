#include "gun.h"

Gun::Gun(int strenght,int demage, int xPosition,int yPosition):Items(strenght, demage,xPosition,yPosition)
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

