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

void Enemy::chasePlayer(float playerPosX, float playerPosY) {
    float distance = std::sqrt(std::pow(getEnemyPosX() - playerPosX, 2) + std::pow(getEnemyPosY() - playerPosY, 2));
    float angle_rad = std::atan2(getEnemyPosY() - playerPosY, getEnemyPosX() - playerPosX);
    float angle_deg = angle_rad * 180 / M_PI;
    std::cout << angle_deg << std::endl;
    if(angle_deg==0){
        m_enemyPos->setXValue(-10);
    }else if(angle_deg>0 && angle_deg<90){
        m_enemyPos->setXValue(-10);
        m_enemyPos->setYValue(-10);
    }else if(angle_deg==90){
        m_enemyPos->setYValue(-10);
    }else if(angle_deg>90 && angle_deg<180){
        m_enemyPos->setXValue(+10);
        m_enemyPos->setYValue(-10);
    }else if(angle_deg==180){
        m_enemyPos->setXValue(+10);
    }else if(angle_deg>=-180 && angle_deg <-90){
        m_enemyPos->setXValue(+10);
        m_enemyPos->setYValue(+10);
    }else if(angle_deg==-90){
        m_enemyPos->setYValue(+10);
    }else if(angle_deg>-90 && angle_deg<0){
        m_enemyPos->setXValue(-10);
        m_enemyPos->setYValue(+10);
    }
    emit positionChanged();
}

