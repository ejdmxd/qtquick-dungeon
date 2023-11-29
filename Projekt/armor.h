#ifndef ARMOR_H
#define ARMOR_H
#include "items.h"

class Armor:public Items
{
public:
    Armor(int strenght,int demage,int xPosition, int yPosition);
    void setDemage(unsigned int newDemage);
};

#endif // ARMOR_H
