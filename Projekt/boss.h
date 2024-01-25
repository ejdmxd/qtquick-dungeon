#ifndef BOSS_H
#define BOSS_H
#include "enemy.h"
class Boss : public Enemy
{
    Q_PROPERTY(int str READ getAttack NOTIFY strChanged)
    Q_PROPERTY(int health READ getHealth NOTIFY healthChanged)
protected:
    int m_str;
    int m_health;
public:
    Boss(int str, int health, std::string type, int x, int y);
    int getAttack();
    int getEnemyHP() final;
    void damageEnemy(int amount) final;
    void attackPlayer(Player* player);
    bool isPlayerAttackable(Player* player);


signals:
    void strChanged();
    void healthChanged();
};


#endif // BOSS_H
