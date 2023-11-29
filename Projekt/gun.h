#ifndef GUN_H
#define GUN_H
#include "items.h"

class Gun:public Items
{
private:
    unsigned int m_bullets;
public:
    Gun(int strenght,int demage, int xPosition, int yPosition);
    void setStrenght();
    unsigned int getBullets();
    void shotBullet();
};

#endif // GUN_H
