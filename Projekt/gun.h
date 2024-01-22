#ifndef GUN_H
#define GUN_H
#include "items.h"

class Gun:public Items
{
private:
    int m_damage;
    unsigned int m_bullets;
public:
    Gun(int damage, int xPosition, int yPosition);
    void setStrenght();
    unsigned int getBullets();
    Q_INVOKABLE int getDamage();
    void shotBullet();
};

#endif // GUN_H
