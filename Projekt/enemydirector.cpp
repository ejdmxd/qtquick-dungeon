#include "enemydirector.h"

EnemyDirector::EnemyDirector(QObject *parent)
    : QObject{parent}
{

}

Zombie* EnemyDirector::createZombie(int positionX, int positionY){
    return new Zombie(10, 10, positionX, positionY);
}


/*Enemy* Enemy::getEnemy(int type, int x, int y) {
    switch (type) {
    case 1:
        return new Zombie(50,150, x ,y);
        break;

    }
    return nullptr; // Dočasně vrací nullptr, opravte podle potřeby
}
*/
