#include "position.h"


Position::Position(QObject *parent) : QObject{parent}{

}

unsigned int Position::getXValue() const {
    return m_xValue;
}

unsigned int Position::getYValue() const {
    return m_yValue;
}

void Position::setXValue(int newPosition) {
    m_xValue += newPosition;
}

void Position::setYValue(int newPosition) {
    m_yValue += newPosition;
}
