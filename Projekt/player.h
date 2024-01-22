#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "position.h"
#include <QObject>
#include <QVariant>
#include <vector>
#include "inventory.h"

class Player : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QVariant position READ getPosition NOTIFY positionChanged)
    Q_PROPERTY(unsigned int  positionX READ getXPosition NOTIFY positionXChanged)
    Q_PROPERTY(unsigned int  positionY READ getYPosition NOTIFY positionYChanged)
    Q_PROPERTY(Inventory* inventory READ getInventory NOTIFY inventoryChanged)
    //Q_PROPERTY(double rotationAngle READ getRotationAngle NOTIFY rotationAngleChanged)


private:
    Position* m_position = new Position;
    Inventory* m_inventory;
    int m_attack;
    int m_health;
    int m_def;
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

    Q_INVOKABLE int getHealth();
    Q_INVOKABLE int getDef();
    Q_INVOKABLE int getAttack();


signals:
    //void positionChanged();
    void positionXChanged();
    void positionYChanged();
    void inventoryChanged();
    //void rotationAngleChanged();
};

#endif // PLAYER_H
