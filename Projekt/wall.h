#ifndef WALL_H
#define WALL_H

#include <QObject>
#include "position.h"
class Wall:public QObject{
    Q_OBJECT
    Q_PROPERTY(int  positionX READ getPositionX CONSTANT)
    Q_PROPERTY(int  positionY READ getPositionY CONSTANT)
    Position *position;
public:
    explicit Wall(QObject *parent=nullptr);
    Wall(int positionx, int positionY);
    int getPositionX();
    int getPositionY();
};

#endif // WALL_H
