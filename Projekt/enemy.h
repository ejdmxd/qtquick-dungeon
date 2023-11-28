#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "position.h"

class Zombie;

class Enemy : public QObject
{
    Q_OBJECT
    Q_PROPERTY(unsigned int enemyX READ getEnemyPosX CONSTANT)
    Q_PROPERTY(unsigned int enemyY READ getEnemyPosY CONSTANT)
protected:
    Position* m_enemyPos = new Position;
    Enemy(int x, int y);
public:
    explicit Enemy(QObject *parent = nullptr);

    virtual int getAttack() = 0;
    virtual void attackPlayer() = 0;
    static Enemy* getEnemy(int type, int x, int y);
    int getEnemyPosX() const;
    int getEnemyPosY() const;
    void chasePlayer(int playerPosX, int playerPosY);
signals:
};

#endif // ENEMY_H
