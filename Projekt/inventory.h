#ifndef INVENTORY_H
#define INVENTORY_H

#include <QObject>
#include <QVariantList>
#include "gun.h"
#include "armor.h"


class Inventory : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Gun* gun READ getGun NOTIFY gunChanged)
    Q_PROPERTY(Armor* armor READ getArmor NOTIFY armorChanged)
    Q_PROPERTY(bool visible READ isVisible NOTIFY visibilityChanged)
    // Q_PROPERTY(QList<QObject*> potions READ getPotions NOTIFY potionsChanged)

private:
    Gun* m_gun;
    Armor* m_armor;
    bool m_visible;
    // std::vector<Potion*> m_potion;

public:
    Inventory();

    Q_INVOKABLE bool isVisible();

    Q_INVOKABLE void pickGun(Gun* g);
    Q_INVOKABLE void dropGun();


    Q_INVOKABLE void pickArmor(Armor* a);
    Q_INVOKABLE void dropArmor();
    Gun* getGun() const;
    Armor* getArmor() const;

    // Q_INVOKALBE void voidUsePotion(int id);



signals:
    void gunChanged();
    void armorChanged();
    void visibilityChanged();
};

#endif // INVENTORY_H
