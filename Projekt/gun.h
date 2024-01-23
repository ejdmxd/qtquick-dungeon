#ifndef GUN_H
#define GUN_H
#include "items.h"

class Gun:public Items
{

private:
    int m_damage;
    unsigned int m_bullets;
public:
    Gun(QString weaponName, int damage, int xPosition, int yPosition);
    void setStrenght();
    unsigned int getBullets();
    int getDamage() const;
    void shotBullet();
};

#endif // GUN_H
