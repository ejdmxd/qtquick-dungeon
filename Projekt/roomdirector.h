#ifndef ROOMDIRECTOR_H
#define ROOMDIRECTOR_H

#include <QObject>
#include "room.h"

//Room director slouzi k uprave jednotlivych mistnosti
class RoomDirector : public QObject
{
    Q_OBJECT
public:
    explicit RoomDirector(QObject *parent = nullptr);
    void addRightEntrance(Room* room);
    void addLeftEntrance(Room* room);
    void addTopEntrance(Room* room);
    void addBottomEntrance(Room* room);
    void clearRoom(Room* room);
    void addNPC(Room* room, int positionX, int positionY, int enemiesNumber);
signals:

};

#endif // ROOMDIRECTOR_H
