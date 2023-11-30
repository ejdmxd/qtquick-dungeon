#include "skeleton.h"

Skeleton::Skeleton(int str, int health,std::string type, int x, int y) : Enemy(type, x, y) {
    m_str = str;
    m_health = health;
}

int Skeleton::getAttack()  {
    return m_str;
}

int Skeleton::getHealth() const {
    return m_health;
}

void Skeleton::attackPlayer() {
    //todo pridat hrace do metody jako parametr a setnout mu hp na -= getAttack()
}
