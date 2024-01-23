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
    Position * position;
public:
    explicit Items(QObject * parent=nullptr);
    Items(int xPosition, int yPosition);
    QString getName() const;
    int getPositionX();
    int getPositionY();
};

#endif // ITEMS_H
