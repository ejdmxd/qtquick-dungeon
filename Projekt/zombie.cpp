#include "zombie.h"
#include "player.h"

// Zombie::Zombie(QObject *parent) : Enemy(parent), m_str(0), m_health(100) {
//     // Případné inicializace
// }



Zombie::Zombie(int str, int health, std::string type, int x, int y) : Enemy(type, x, y){
    m_str = str;
    m_health = health;

}

int Zombie::getAttack()  {
    return m_str;
}

int Zombie::getHealth() const {
    return m_health;
}

void Zombie::attackPlayer(Player* player) {
    //todo pridat hrace do metody jako parametr a setnout mu hp na -= getAttack()
    player->takeDamage(150);
}


bool Zombie::isPlayerAttackable(Player* player)  {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), player->getXPosition(),  player->getYPosition());
    if(distance < 100){
        attackPlayer(player);
        return true;
    }
    return false;
}
