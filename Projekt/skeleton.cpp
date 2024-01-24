#include "skeleton.h"
#include "player.h"

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

void Skeleton::attackPlayer(Player* player) {
    player->takeDamage((getAttack()- player->getDef()));
}

bool Skeleton::isPlayerAttackable(Player* player)  {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), player->getXPosition(),  player->getYPosition());
    if(distance < 70){
        attackPlayer(player);
        return true;
    }
    return false;
}
