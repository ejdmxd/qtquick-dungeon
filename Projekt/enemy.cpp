#include "enemy.h"
#include "player.h"

Enemy::Enemy(QObject *parent) : QObject{parent}
{
}

Enemy::Enemy(std::string type,int x, int y) {
    m_enemyType = type;
    m_enemyPos->setXValue(x);
    m_enemyPos->setYValue(y);
}

int Enemy::getEnemyPosX() const {
    return m_enemyPos->getXValue();
}

int Enemy::getEnemyPosY() const {
    return m_enemyPos->getYValue();
}

QString Enemy::getEnemyType() const {
    return QString::fromStdString(m_enemyType);
}


double Enemy::getEnemyRotation() const {
    return m_enemyPos->getRotation();
}

void Enemy::findPlayer(float playerPosX, float playerPosY) {
    float distance = m_distanceMgr->calculateVector(getEnemyPosX(), getEnemyPosY(), playerPosX, playerPosY);
    float angle_rad  = m_distanceMgr->calculateRadials(getEnemyPosX(), getEnemyPosY(), playerPosX, playerPosY);
    float angle_deg = m_distanceMgr->calculateDegrees(angle_rad);
    //std::cout << angle_deg << std::endl; Overeni uhlu
    if(isPlayerNearby(distance) && distance > 70){ //Overeni jak je hrac daleko
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
    if(angle > -10 && angle < 10 ){
        moveEnemy(-10);
    }else if(angle>0 && angle<90){
        moveEnemy(-10,-10);
    }else if(angle > 80 && angle < 100){
        moveEnemy(10,-10);
    }else if(angle>90 && angle<170){
        moveEnemy(10,-10);
    }else if(angle > 165 && angle < 180){
        moveEnemy(10);
    }else if(angle>=-180 && angle <-90){
        moveEnemy(10, 10);
    }else if(angle < -80 && angle > -100){
        moveEnemy(0, 10);
    }else if(angle>-90 && angle<0){
        moveEnemy(-10, 10);
    }
    if(angle > 90 && angle < 180 || angle > -180 && angle < -90){
        setEnemyRotation(1);
        emit rotationChanged();
    } else{
        setEnemyRotation(-1);
        emit rotationChanged();
    }
}





void Enemy::moveEnemy(float x, float y){
    m_enemyPos->setXValue(x);
    m_enemyPos->setYValue(y);
}

void Enemy::setEnemyRotation(double newRotation){
    m_enemyPos->setRotation(newRotation);
    emit
}
