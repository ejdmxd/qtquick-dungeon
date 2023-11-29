#ifndef ITEMS_H
#define ITEMS_H

#include <QObject>
#include "position.h"
class Items:public QObject
{
    Q_OBJECT
    Q_PROPERTY(int  positionX READ getPositionX CONSTANT)
    Q_PROPERTY(int  positionY READ getPositionY CONSTANT)
    Q_PROPERTY(QString  name READ getName CONSTANT)
public:
    QString m_name;
    unsigned int m_strenght;
    unsigned int m_demage;
    Position * position;
public:
    explicit Items(QObject * parent=nullptr);
    Items(int strenght, int demage, int xPosition, int yPosition);
    unsigned int getStrenght();
    unsigned int getDemage();
    QString getName();
    int getPositionX();
    int getPositionY();
};

#endif // ITEMS_H
