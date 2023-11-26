#ifndef ITEMS_H
#define ITEMS_H

#include <QObject>

class Items:public QObject
{
    Q_OBJECT
public:
    QString m_name;
    unsigned int m_strenght;
    unsigned int m_demage;
public:
    explicit Items(QObject * parent=nullptr);
    Items(unsigned int strenght, unsigned int demage);
    unsigned int getStrenght();
    unsigned int getDemage();
    QString getName();
};

#endif // ITEMS_H
