#include "distancemanager.h"

DistanceManager::DistanceManager(QObject *parent)
    : QObject{parent}
{

}

//funkci se preda pozice objektu a pozice hrace, urci vzdalenost, tuto funkci vyuzivaji npc, enemies i predmety
float DistanceManager::calculateVector(float enemyPositionX, float enemyPositionY, float playerPositionX, float playerPositionY){
    float vector = std::sqrt(std::pow(enemyPositionX - playerPositionX, 2) + std::pow(enemyPositionY - playerPositionY, 2));
    return vector;
}

//tato funkce vypocitava smer, kterym se maji vydat nepratele
float DistanceManager::calculateRadials(float enemyPositionX, float enemyPositionY, float playerPositionX, float playerPositionY){
    float rad = std::atan2(enemyPositionY - playerPositionY, enemyPositionX - playerPositionX);
    return rad;
}


float DistanceManager::calculateDegrees(float angle_rad){
    float deg = angle_rad * 180 / M_PI;
    return deg;
}
