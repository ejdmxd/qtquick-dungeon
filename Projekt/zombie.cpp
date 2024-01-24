#include "zombie.h"
#include "player.h"

Zombie::Zombie(int str, int health, std::string type, int x, int y) : Enemy(type, x, y){
    m_str = str;
    m_health = health;

}

int Zombie::getAttack()  {
    return m_str;
}

int Zombie::getEnemyHP(){
    return m_health;
}

void Zombie::damageEnemy(int amount){
        m_health = m_health - amount;
}

//Player dostane poskozeni zombie - celkova obrana hrace(zakladni + armor)
void Zombie::attackPlayer(Player* player) {
    player->takeDamage((getAttack()- player->getDef()));

}

//Kontrola zda je player v dostatecne blizkosti pro dostani dmg od zombie
bool Zombie::isPlayerAttackable(Player* player)  {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), player->getXPosition(),  player->getYPosition());
    if(distance < 70){
        attackPlayer(player);
        return true;
    }
    return false;
}
