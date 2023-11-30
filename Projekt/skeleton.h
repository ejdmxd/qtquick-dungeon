#ifndef SKELETON_H
#define SKELETON_H
#include "enemy.h"

class Skeleton : public Enemy
{
    Q_PROPERTY(int str READ getAttack NOTIFY strChanged)
    Q_PROPERTY(int health READ getHealth NOTIFY healthChanged)
protected:
    int m_str;
    int m_health;
public:
    Skeleton(int str, int health, std::string type, int x, int y);
    int getAttack();
    int getHealth() const;
    void attackPlayer();

    signals:
    void strChanged();
    void healthChanged();
};

#endif // SKELETON_H
