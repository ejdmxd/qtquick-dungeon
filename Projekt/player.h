#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "position.h"
#include <QObject>
#include <QVariant>
#include <vector>
#include "inventory.h"
#include <QTimer>


class Player : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QVariant position READ getPosition NOTIFY positionChanged)
    Q_PROPERTY(unsigned int  positionX READ getXPosition NOTIFY positionXChanged)
    Q_PROPERTY(unsigned int  positionY READ getYPosition NOTIFY positionYChanged)
    Q_PROPERTY(Inventory* inventory READ getInventory)
    Q_PROPERTY(bool beingAttacked READ getIsAttacked NOTIFY isAttacked)
    Q_PROPERTY(int playersHealth READ getHealth NOTIFY isAttacked)
    Q_PROPERTY(int weaponDmg READ getWeaponDmg CONSTANT)
    Q_PROPERTY(QString weaponName READ getWeaponName CONSTANT)
    Q_PROPERTY(Gun* gun READ getWeapon CONSTANT)
    Q_PROPERTY(int armorDef READ getArmorDef CONSTANT)
    Q_PROPERTY(QString armorName READ getArmorName CONSTANT)
    Q_PROPERTY(Armor* armor READ getArmor CONSTANT)

    //Q_PROPERTY(double rotationAngle READ getRotationAngle NOTIFY rotationAngleChanged)


private:
    Position* m_position = new Position;
    Inventory* m_inventory;
    int m_attack;
    int m_health = 1000;
    int m_def;
    bool m_isAttacked = false;
public:
    explicit Player(QObject *parent = nullptr);
    Player(int health, int def);
    Q_INVOKABLE void movePlayer(int changeX, int changeY,unsigned int value);
    void setRotationAngle(double angle);
    //QVariant getPosition() const;
    unsigned int getXPosition() const;
    unsigned int getYPosition() const;
    Q_INVOKABLE Inventory* getInventory();
    //double getRotationAngle() const;

    Q_INVOKABLE int getDef();
    Q_INVOKABLE int getAttack();


    void takeDamage(int amount);
    bool getIsAttacked() const;
    Q_INVOKABLE int getHealth() const;

    // METODY PRO INVENTAR
    // GUN
    Q_INVOKABLE int getWeaponDmg();
    Q_INVOKABLE Gun* getWeapon();
    Q_INVOKABLE QString getWeaponName();
    // ARMOR
    Q_INVOKABLE int getArmorDef();
    Q_INVOKABLE Armor* getArmor();
    Q_INVOKABLE QString getArmorName();

signals:
    //void positionChanged();
    void positionXChanged();
    void positionYChanged();
    void isAttacked();
    //void rotationAngleChanged();
};

#endif // PLAYER_H
