#include "player.h"

Player::Player(QObject *parent) : QObject{parent}{

}

/*QVariant Player::getPosition() const {
    return QVariant::fromValue(m_position);
}*/

unsigned int Player::getXPosition() const {
    return m_position->getXValue();
}

unsigned int Player::getYPosition() const {
    return m_position->getYValue();
}

void Player::movePlayer(QString  direction, unsigned int value){
    if (direction == "up") {
        m_position->setYValue(-value);
        //setRotationAngle(0);
    } else if (direction == "down") {
        m_position->setYValue(value);
        //setRotationAngle(180);
    } else if (direction == "right") {
        m_position->setXValue(value);
        //setRotationAngle(180);
    } else if (direction == "left") {
        m_position->setXValue(-value);
        //setRotationAngle(-180);
    }
    emit positionXChanged();
    emit positionYChanged();
}

/*void Player::setRotationAngle(double angle){
    if(angle != m_rotationAngle){
        m_rotationAngle = angle;
        emit rotationAngleChanged();
    }
}
double Player::getRotationAngle() const {
    return m_rotationAngle;
}
*/
