#ifndef POSITION_H
#define POSITION_H

#include <QObject>

class Position : public QObject
{
    Q_OBJECT
private:
    unsigned int m_xValue = 0;
    unsigned int m_yValue = 0;
public:
    explicit Position(QObject *parent = nullptr);

    unsigned int getXValue() const;
    unsigned int getYValue() const;

    void setXValue(int newPosition);
    void setYValue(int newPosition);

signals:

};
#endif // POSITION_H
