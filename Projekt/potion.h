#ifndef POTION_H
#define POTION_H

#include "items.h"
#include <QObject>

class Potion : public Items
{
    int m_bonusHealth;
public:
    Potion(int bonusHealth, int xPosition, int yPosition);
    int getBonusHealth() const;
    void setBonusHealth(int newBonusHealth);
};

#endif // POTION_H
