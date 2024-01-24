#ifndef INVENTORY_H
#define INVENTORY_H

#include <QObject>
#include <QVariantList>
#include "gun.h"
#include "armor.h"
#include "potion.h"


class Inventory : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool visible READ isVisible NOTIFY visibilityChanged)


private:
    Gun* m_gun;
    Armor* m_armor;
    bool m_visible;
    std::vector<Potion*> m_potions;

public:
    Inventory();

    Q_INVOKABLE bool isVisible();

    Q_INVOKABLE bool pickGun(Gun* g);
    Q_INVOKABLE void dropGun();


    Q_INVOKABLE bool pickArmor(Armor* a);
    Q_INVOKABLE void dropArmor();
    Gun* getGun() const;
    Armor* getArmor() const;

    bool pickPotion(Potion* p);
    int getNumberOfPotions() const;
    void drinkPotion();




signals:
    void gunChanged();
    void armorChanged();
    void visibilityChanged();
};

#endif // INVENTORY_H
