#include "enemydirector.h"

EnemyDirector::EnemyDirector(QObject *parent)
    : QObject{parent}
{

}

Zombie* EnemyDirector::createZombie(int positionX, int positionY){
    return new Zombie(200, 10,"zombie", positionX, positionY);
}

Skeleton* EnemyDirector::createSkeleton(int positionX, int positionY){
    return new Skeleton(150, 15, "skeleton",positionX, positionY);
}



