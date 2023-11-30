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

void Enemy::findPlayer(float playerPosX, float playerPosY) {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), playerPosX, playerPosY);
    float angle_rad  = m_distanceMgr->calculateRadials(getEnemyPosX(), getEnemyPosY(), playerPosX, playerPosY);
    float angle_deg = m_distanceMgr->calculateDegrees(angle_rad);
    //std::cout << angle_deg << std::endl; Overeni uhlu
    if(isPlayerNearby(distance)){ //Overeni jak je hrac daleko
        chasePlayer(angle_deg);
        emit positionChanged();
    }
}


bool Enemy::isPlayerNearby(float distance){
    if(distance < 250){
        return true;
    }else{
        return false;
    }
}


void Enemy::chasePlayer(float angle){
    if(angle==0){
        m_enemyPos->setXValue(-10);
        moveEnemy(-10);
    }else if(angle>0 && angle<90){
        moveEnemy(-10,-10);
    }else if(angle==90){
        moveEnemy(10,-10);
    }else if(angle>90 && angle<180){
        moveEnemy(10,-10);
    }else if(angle==180){
        moveEnemy(10);
    }else if(angle>=-180 && angle <-90){
        moveEnemy(10, 10);
    }else if(angle==-90){
        moveEnemy(0, 10);
    }else if(angle>-90 && angle<0){
        moveEnemy(-10, 10);
    }
}

void Enemy::moveEnemy(float x, float y){
    m_enemyPos->setXValue(x);
    m_enemyPos->setYValue(y);
}

