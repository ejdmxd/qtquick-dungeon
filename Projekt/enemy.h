#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "position.h"
#include <iostream>
#include <cmath>
#include "distancemanager.h"

class Player;

class Enemy : public QObject
{
    Q_OBJECT
    Q_PROPERTY(unsigned int enemyX READ getEnemyPosX NOTIFY positionChanged)
    Q_PROPERTY(unsigned int enemyY READ getEnemyPosY NOTIFY positionChanged)
    Q_PROPERTY(QString enemyType READ getEnemyType CONSTANT)
    Q_PROPERTY(double enemyRotation READ getEnemyRotation NOTIFY rotationChanged)

protected:
    Position* m_enemyPos = new Position;
    Enemy(std::string type,int x, int y);
    DistanceManager* m_distanceMgr = new DistanceManager;
public:
    explicit Enemy(QObject *parent = nullptr);

    virtual int getAttack() = 0;
    int getEnemyPosX() const;
    int getEnemyPosY() const;
    QString getEnemyType() const;
    double getEnemyRotation() const;

    //Metody pro interakci s hracem
    Q_INVOKABLE void findPlayer(float playerPosX, float playerPosY);
    virtual void attackPlayer(Player* player) = 0;
    Q_INVOKABLE virtual bool isPlayerAttackable(Player* player) = 0;
private:
    std::string m_enemyType;
    //Metoda kontrolujici vzdalenost hrace
    bool isPlayerNearby(float distance);
    void chasePlayer(float angle);
    //Metody pro pohyb nepritele
    void moveEnemy(float x, float y = 0);
    void setEnemyRotation(double newRotation);
signals:
    void positionChanged();
    void rotationChanged();
};

#endif // ENEMY_H
