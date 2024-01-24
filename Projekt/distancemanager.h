#ifndef DISTANCEMANAGER_H
#define DISTANCEMANAGER_H

#include <QObject>
#include <cmath>

class DistanceManager : public QObject
{
    Q_OBJECT
public:
    explicit DistanceManager(QObject *parent = nullptr);
    //Trida distance manager slouzi k vypocitavani vzdalenosti
    float calculateVector(float enemyPositionX, float enemyPositionY, float playerPositionX, float playerPositionY);
    float calculateRadials(float enemyPositionX, float enemyPositionY, float playerPositionX, float playerPositionY);
    float calculateDegrees(float angle_rad);
signals:

};

#endif // DISTANCEMANAGER_H
