#ifndef ROOMDIRECTOR_H
#define ROOMDIRECTOR_H

#include <QObject>
#include "room.h"

class RoomDirector : public QObject
{
    Q_OBJECT
public:
    explicit RoomDirector(QObject *parent = nullptr);
    void addRightEntrance(Room* room);
    void addLeftEntrance(Room* room);
    void addTopEntrance(Room* room);
    void addBottomEntrance(Room* room);

signals:

};

#endif // ROOMDIRECTOR_H
