#ifndef GUN_H
#define GUN_H
#include "items.h"

class Gun:public Items
{
private:
    int m_damage;
public:
    Gun(QString weaponName, int damage, int xPosition, int yPosition);
    void setStrenght();
    Q_INVOKABLE int getDamage() const;
};

#endif // GUN_H
