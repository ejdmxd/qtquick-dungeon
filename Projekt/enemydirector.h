#ifndef ENEMYDIRECTOR_H
#define ENEMYDIRECTOR_H

#include <QObject>
#include "zombie.h"
#include "skeleton.h"

class EnemyDirector : public QObject
{
    Q_OBJECT
public:
    explicit EnemyDirector(QObject *parent = nullptr);
    Zombie* createZombie(int positionX, int positionY);
    Skeleton* createSkeleton(int postionX, int postionY);
signals:

};

#endif // ENEMYDIRECTOR_H
