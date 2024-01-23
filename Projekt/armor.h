#ifndef ARMOR_H
#define ARMOR_H
#include "items.h"

class Armor:public Items
{
    QString m_name;
    int m_def;
public:
    Armor(QString armorName,int def,int xPosition, int yPosition);
    void setDef(unsigned int newDef);
    int getDef();
    QString getName();
};

#endif // ARMOR_H
