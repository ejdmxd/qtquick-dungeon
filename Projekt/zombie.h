#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "enemy.h"

class Zombie : public Enemy
{
    Q_PROPERTY(int str READ getAttack NOTIFY strChanged)
    Q_PROPERTY(int health READ getHealth NOTIFY healthChanged)

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
