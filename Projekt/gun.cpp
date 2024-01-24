#include "gun.h"

Gun::Gun(QString weaponName,int damage, int xPosition,int yPosition):Items(xPosition,yPosition)
{
    m_damage = damage;
    m_name= weaponName;
}

Q_INVOKABLE int Gun::getDamage() const{
    return m_damage;
}
