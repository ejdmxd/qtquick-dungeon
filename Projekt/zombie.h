#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "enemy.h"

class Zombie : public Enemy
{
    Q_OBJECT
    Q_PROPERTY(int str READ getAttack NOTIFY strChanged)
    Q_PROPERTY(int health READ getHealth NOTIFY healthChanged)
    Q_PROPERTY(unsigned int enemyX READ getEnemyPosX)
    Q_PROPERTY(unsigned int enemyY READ getEnemyPosY)

protected:
    int m_str;
    int m_health;

public:
    explicit Zombie(QObject *parent = nullptr);
    Zombie(int str, int health, int x, int y);
    int getAttack();
    int getHealth() const;
    void attackPlayer();
signals:
    void strChanged();
    void healthChanged();

};

#endif // ZOMBIE_H
