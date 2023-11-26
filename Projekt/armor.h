#ifndef ARMOR_H
#define ARMOR_H
#include "items.h"

class Armor:public Items
{
public:
    Armor(unsigned int strenght, unsigned int demage);
    void setDemage(unsigned int newDemage);
};

#endif // ARMOR_H
