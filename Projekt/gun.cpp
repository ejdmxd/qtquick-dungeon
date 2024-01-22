#include "gun.h"

Gun::Gun(int damage, int xPosition,int yPosition):Items(xPosition,yPosition)
{
    m_damage = damage;
    m_bullets=50;
    m_name="Gun";
}

int Gun::getDamage(){
    return m_damage;
}


unsigned int Gun::getBullets(){
    return m_bullets;
}

void Gun::shotBullet(){
    m_bullets-=1;
}

