#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "position.h"

class Enemy : public QObject
{
    Q_OBJECT
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
