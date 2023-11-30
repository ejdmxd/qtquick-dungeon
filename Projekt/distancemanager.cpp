#include "distancemanager.h"

DistanceManager::DistanceManager(QObject *parent)
    : QObject{parent}
{

}


float DistanceManager::calculateVector(float enemyPositionX, float enemyPositionY, float playerPositionX, float playerPositionY){
    float vector = std::sqrt(std::pow(enemyPositionX - playerPositionX, 2) + std::pow(enemyPositionY - playerPositionY, 2));
    return vector;
}


float DistanceManager::calculateRadials(float enemyPositionX, float enemyPositionY, float playerPositionX, float playerPositionY){
    float rad = std::atan2(enemyPositionY - playerPositionY, enemyPositionX - playerPositionX);
    return rad;
}


float DistanceManager::calculateDegrees(float angle_rad){
    float deg = angle_rad * 180 / M_PI;
    return deg;
}
