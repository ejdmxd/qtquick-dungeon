#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "position.h"
#include <iostream>
#include <cmath>
#include "distancemanager.h"


class Enemy : public QObject
{
    Q_OBJECT
    Q_PROPERTY(unsigned int enemyX READ getEnemyPosX NOTIFY positionChanged)
    Q_PROPERTY(unsigned int enemyY READ getEnemyPosY NOTIFY positionChanged)
    Q_PROPERTY(double enemyRotation READ getEnemyRotation NOTIFY rotationChanged)
protected:
    Position* m_enemyPos = new Position;
    Enemy(int x, int y);
    DistanceManager* m_distanceMgr = new DistanceManager;
public:
    explicit Enemy(QObject *parent = nullptr);
    virtual int getAttack() = 0;
    virtual void attackPlayer() = 0;
    int getEnemyPosX() const;
    int getEnemyPosY() const;
    double getEnemyRotation() const;
    Q_INVOKABLE void findPlayer(float playerPosX, float playerPosY);
private:
    bool isPlayerNearby(float distance);
    void chasePlayer(float angle);
    void moveEnemy(float x, float y = 0);
    void setEnemyRotation(double newRotation);
signals:
    void positionChanged();
    void rotationChanged();
};

#endif // ENEMY_H
