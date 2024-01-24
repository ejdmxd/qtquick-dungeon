#include "position.h"


Position::Position(QObject *parent) : QObject{parent}{

}

unsigned int Position::getXValue() const {
    return m_xValue;
}

unsigned int Position::getYValue() const {
    return m_yValue;
}

double Position::getRotation() const{
    return m_rotation;
}

void Position::setXValue(int newPosition) {
    m_xValue += newPosition;
}

void Position::setYValue(int newPosition) {
    m_yValue += newPosition;
}

void Position::newX(int newPosition) {
    m_xValue = newPosition;
}

void Position::newY(int newPosition) {
    m_yValue = newPosition;
}

void Position::setRotation(double newRotation){
    m_rotation = newRotation;
}
