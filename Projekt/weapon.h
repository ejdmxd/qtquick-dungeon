#ifndef WEAPON_H
#define WEAPON_H
#include <QObject>

class Weapon: public QObject
{
private:

public:
    explicit Weapon(QObject * parent=nullptr);
};

#endif // WEAPON_H
