#include "zombie.h"

Zombie::Zombie(int str, int health, int x, int y) : Enemy(x, y){
    m_str = str;
    m_health = health;

}

int Zombie::getAttack() {
    return m_str;
}

int Zombie::getHealth() {
    return m_health;
}

void Zombie::attackPlayer() {
    //todo pridat hrace do metody jako parametr a setnout mu hp na -= getAttack()
}
