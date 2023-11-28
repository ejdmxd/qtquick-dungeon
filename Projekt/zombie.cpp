#include "zombie.h"
#include "moc_zombie.cpp"

Zombie::Zombie(QObject *parent) : Enemy(parent), m_str(0), m_health(100) {
    // Případné inicializace
}



Zombie::Zombie(int str, int health, int x, int y) : Enemy(x, y){
    m_str = str;
    m_health = health;

}

int Zombie::getAttack()  {
    return m_str;
}

int Zombie::getHealth() const {
    return m_health;
}

void Zombie::attackPlayer() {
    //todo pridat hrace do metody jako parametr a setnout mu hp na -= getAttack()
}
