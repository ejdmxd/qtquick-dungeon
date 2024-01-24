#include "mummy.h"
#include "player.h"

Mummy::Mummy(int str, int health, std::string type, int x, int y) : Enemy(type, x, y){
    m_str = str;
    m_health = health;

}

int Mummy::getAttack()  {
    return m_str;
}

int Mummy::getHealth() const {
    return m_health;
}

//Player dostane poskozeni mumie - celkova obrana hrace(zakladni + armor)
void Mummy::attackPlayer(Player* player) {
    player->takeDamage((getAttack()- player->getDef()));

}

//Kontrola zda je player v dostatecne blizkosti pro dostani dmg od zombie
bool Mummy::isPlayerAttackable(Player* player)  {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), player->getXPosition(),  player->getYPosition());
    if(distance < 70){
        attackPlayer(player);
        return true;
    }
    return false;
}
