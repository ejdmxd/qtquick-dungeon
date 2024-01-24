#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "enemy.h"

class Player;

class Zombie : public Enemy
{
    Q_PROPERTY(int str READ getAttack NOTIFY strChanged)
    Q_PROPERTY(int health READ getHealth NOTIFY healthChanged)

protected:
    int m_str;
    int m_health;

public:
    //zbytecne explicit Zombie(QObject *parent = nullptr);
    Zombie(int str, int health, std::string type, int x, int y);
    int getAttack();
    int getEnemyHP() final;
    void damageEnemy(int amount) final;
    void attackPlayer(Player* player);
    bool isPlayerAttackable(Player* player);

signals:
    void strChanged();
    void healthChanged();
};

#endif // ZOMBIE_H
