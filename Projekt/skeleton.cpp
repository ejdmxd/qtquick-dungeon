#include "skeleton.h"
#include "player.h"

Skeleton::Skeleton(int str, int health,std::string type, int x, int y) : Enemy(type, x, y) {
    m_str = str;
    m_health = health;
}

int Skeleton::getAttack()  {
    return m_str;
}

int Skeleton::getEnemyHP() {
    return m_health;
}

void Skeleton::damageEnemy(int amount){

    m_health = m_health - amount;

}

//Player dostane poskozeni skeletona - celkova obrana hrace(zakladni + armor)
void Skeleton::attackPlayer(Player* player) {
    player->takeDamage((getAttack()- player->getDef()));
}

//Kontrola zda je player v dostatecne blizkosti pro dostani dmg od skeletona
bool Skeleton::isPlayerAttackable(Player* player)  {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), player->getXPosition(),  player->getYPosition());
    if(distance < 70){
        attackPlayer(player);
        return true;
    }
    return false;
}
