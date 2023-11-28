#ifndef ZOMBIE_H
#define ZOMBIE_H


#include "Enemy.h"

class Zombie : public Enemy
{
protected:
    int m_str;
    int m_health;
public:
    explicit Zombie(QObject *parent = nullptr);
    Zombie(int str, int health, int x, int y);
    int getAttack();
    int getHealth();
    void attackPlayer();

signals:
};

#endif // ZOMBIE_H
