#ifndef ENEMYMOVEMENTMANAGER_H
#define ENEMYMOVEMENTMANAGER_H

#include <QObject>

class EnemyMovementManager : public QObject
{
    Q_OBJECT
public:
    explicit EnemyMovementManager(QObject *parent = nullptr);

signals:

};

#endif // ENEMYMOVEMENTMANAGER_H
