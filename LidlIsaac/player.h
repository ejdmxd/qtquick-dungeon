#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "position.h"
#include <QObject>
#include <QVariant>

class Player : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QVariant position READ getPosition NOTIFY positionChanged)
    Q_PROPERTY(unsigned int  positionX READ getXPosition NOTIFY positionXChanged)
    Q_PROPERTY(unsigned int  positionY READ getYPosition NOTIFY positionYChanged)


private:
    Position* m_position = new Position;
public:
    explicit Player(QObject *parent = nullptr);
    Q_INVOKABLE void movePlayer(QString direction, unsigned int value);
    //QVariant getPosition() const;
    unsigned int getXPosition() const;
    unsigned int getYPosition() const;

signals:
    void positionChanged();
    void positionXChanged();
    void positionYChanged();

};

#endif // PLAYER_H
