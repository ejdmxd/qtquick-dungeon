#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "position.h"
#include <QObject>
#include <QVariant>
#include <vector>
#include "items.h"
#include <QTimer>


class Player : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QVariant position READ getPosition NOTIFY positionChanged)
    Q_PROPERTY(unsigned int  positionX READ getXPosition NOTIFY positionXChanged)
    Q_PROPERTY(unsigned int  positionY READ getYPosition NOTIFY positionYChanged)
    Q_PROPERTY(bool beingAttacked READ getIsAttacked NOTIFY isAttacked)
    //Q_PROPERTY(double rotationAngle READ getRotationAngle NOTIFY rotationAngleChanged)


private:
    Position* m_position = new Position;
    int m_health = 3;
    //double m_rotationAngle;
    std::vector<Items*> inventory;
    bool m_isAttacked = false;
public:
    explicit Player(QObject *parent = nullptr);
    Q_INVOKABLE void movePlayer(int changeX, int changeY,unsigned int value);
    void setRotationAngle(double angle);
    //QVariant getPosition() const;
    unsigned int getXPosition() const;
    unsigned int getYPosition() const;
    //double getRotationAngle() const;
    void takeDamage(int amount);
    bool getIsAttacked() const;
signals:
    //void positionChanged();
    void positionXChanged();
    void positionYChanged();
    void isAttacked();
    //void rotationAngleChanged();
};

#endif // PLAYER_H
