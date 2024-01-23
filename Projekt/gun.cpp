#include "gun.h"

Gun::Gun(QString weaponName,int damage, int xPosition,int yPosition):Items(xPosition,yPosition)
{
    m_damage = damage;
    m_bullets=50;
    m_name= weaponName;
}

int Gun::getDamage() const{
    return m_damage;
}


unsigned int Gun::getBullets(){
    return m_bullets;
}

void Gun::shotBullet(){
    m_bullets-=1;
}

