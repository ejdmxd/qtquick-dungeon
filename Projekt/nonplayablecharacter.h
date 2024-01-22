#ifndef NONPLAYABLECHARACTER_H
#define NONPLAYABLECHARACTER_H

#include <QObject>
#include "position.h"

class NonPlayableCharacter : public QObject
{
    Q_OBJECT
    Position* m_position = new Position;
public:
    explicit NonPlayableCharacter(QObject *parent = nullptr);

signals:

};

#endif // NONPLAYABLECHARACTER_H
