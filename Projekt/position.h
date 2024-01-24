#ifndef POSITION_H
#define POSITION_H

#include <QObject>

//Trida, ktera uklada jednotlive pozice objektu
class Position : public QObject
{
    Q_OBJECT
private:
    unsigned int m_xValue = 0;
    unsigned int m_yValue = 0;
    double m_rotation = 1;
public:
    explicit Position(QObject *parent = nullptr);

    unsigned int getXValue() const;
    unsigned int getYValue() const;
    double getRotation() const;

    void setXValue(int newPosition);
    void setYValue(int newPosition);
    void newX(int newPosition);
    void newY(int newPosition);
    void setRotation(double newRotation);

signals:

};
#endif // POSITION_H
