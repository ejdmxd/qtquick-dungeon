#include "boss.h"
#include "player.h"
Boss::Boss(int str, int health,std::string type, int x, int y) : Enemy(type, x, y) {
    m_str = str;
    m_health = health;
}

int Boss::getAttack()  {
    return m_str;
}

int Boss::getEnemyHP() {
    return m_health;
}

void Boss::damageEnemy(int amount){

    m_health = m_health - amount;

}

//Player dostane poskozeni skeletona - celkova obrana hrace(zakladni + armor)
void Boss::attackPlayer(Player* player) {
    player->takeDamage((getAttack()- player->getDef()));
}

//Kontrola zda je player v dostatecne blizkosti pro dostani dmg od skeletona
bool Boss::isPlayerAttackable(Player* player)  {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), player->getXPosition(),  player->getYPosition());
    if(distance < 70){
        attackPlayer(player);
        return true;
    }
    return false;
}
