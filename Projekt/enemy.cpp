#include "enemy.h"
#include "zombie.h"

Enemy::Enemy(QObject *parent) : QObject{parent}
{
}

Enemy::Enemy(int x, int y) {
    m_enemyPos->setXValue(x);
    m_enemyPos->setYValue(y);
}

int Enemy::getEnemyPosX() const {
    return m_enemyPos->getXValue();
}

int Enemy::getEnemyPosY() const {
    return m_enemyPos->getYValue();
}

void Enemy::chasePlayer(int playerPosX, int playerPosY) {
    // todo
}

Enemy* Enemy::getEnemy(int type, int x, int y) {
    switch (type) {
    case 1:
        return new Zombie(50,150, x ,y);
        break;

    }
    return nullptr; // Dočasně vrací nullptr, opravte podle potřeby
}
