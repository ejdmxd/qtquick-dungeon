#ifndef MUMMY_H
#define MUMMY_H

#include "enemy.h"
class Player;
class Mummy : public Enemy
{
    Q_PROPERTY(int str READ getAttack NOTIFY strChanged)
    Q_PROPERTY(int health READ getHealth NOTIFY healthChanged)

protected:
    int m_str;
    int m_health;

public:
    Mummy(int str, int health, std::string type, int x, int y);
    int getAttack();
    int getHealth() const;
    void attackPlayer(Player* player);
    bool isPlayerAttackable(Player* player);

signals:
    void strChanged();
    void healthChanged();
};

#endif // MUMMY_H
