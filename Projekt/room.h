// Room.h
#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QVector>
#include <QPointF>

class Item;
class Block;
class Enemy;

class Room : public QObject {
    Q_OBJECT
private:
    qreal m_width;
    qreal m_height;
    QVector<Item*> m_items;
    QVector<Block*> m_blocks;
    QVector<Enemy*> m_enemies;
public:
    Room(QObject* parent = nullptr);
    ~Room();

    // Metody pro nastavení rozměrů místnosti
    void setDimensions(qreal width, qreal height);

    // Metody pro přidání objektů na určitou pozici
    Q_INVOKABLE void addItem(Item* item, const QPointF& position);
    Q_INVOKABLE void addBlock(Block* block, const QPointF& position);
    Q_INVOKABLE void addEnemy(Enemy* enemy, const QPointF& position);

};

#endif // ROOM_H
