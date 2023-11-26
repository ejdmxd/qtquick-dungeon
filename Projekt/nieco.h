#ifndef NIECO_H
#define NIECO_H

#include <QObject>

class Nieco: public QObject
{
    Q_OBJECT
public:
    explicit Nieco(QObject *parent = nullptr);
};

#endif // NIECO_H
