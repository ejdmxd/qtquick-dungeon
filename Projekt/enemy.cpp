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


