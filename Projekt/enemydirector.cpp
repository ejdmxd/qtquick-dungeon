#include "enemydirector.h"

EnemyDirector::EnemyDirector(QObject *parent)
    : QObject{parent}
{

}

Zombie* EnemyDirector::createZombie(int positionX, int positionY){
    return new Zombie(200, 100,"zombie", positionX, positionY);
}

Skeleton* EnemyDirector::createSkeleton(int positionX, int positionY){
    return new Skeleton(150, 80, "skeleton",positionX, positionY);
}

Mummy* EnemyDirector::createMummy(int positionX, int positionY){
    return new Mummy(250, 60, "mummy",positionX, positionY);
}




