#ifndef POSITION_H
#define POSITION_H

#include <QObject>

class Position : public QObject
{
    Q_OBJECT
private:
    unsigned int m_xValue = 100;
    unsigned int m_yValue = 100;
    double m_rotation = 1;
public:
    explicit Position(QObject *parent = nullptr);

    unsigned int getXValue() const;
    unsigned int getYValue() const;
    double getRotation() const;

    void setXValue(int newPosition);
    void setYValue(int newPosition);
    void setRotation(double newRotation);

signals:

};
#endif // POSITION_H
