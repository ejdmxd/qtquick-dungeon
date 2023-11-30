#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "position.h"
#include <iostream>
#include <cmath>


class Enemy : public QObject
{
    Q_OBJECT
    Q_PROPERTY(unsigned int enemyX READ getEnemyPosX NOTIFY positionChanged)
    Q_PROPERTY(unsigned int enemyY READ getEnemyPosY NOTIFY positionChanged)
protected:
    Position* m_enemyPos = new Position;
    Enemy(int x, int y);
public:
    explicit Enemy(QObject *parent = nullptr);
    virtual int getAttack() = 0;
    virtual void attackPlayer() = 0;
    int getEnemyPosX() const;
    int getEnemyPosY() const;
    Q_INVOKABLE void chasePlayer(float playerPosX, float playerPosY);
signals:
    void positionChanged();
};

#endif // ENEMY_H
