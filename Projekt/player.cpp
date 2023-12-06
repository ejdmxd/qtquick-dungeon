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

void Player::movePlayer(int changeX, int changeY, unsigned int value) {
    if (changeX > 0) {
        m_position->setXValue(value);
    } else if (changeX < 0) {
        m_position->setXValue(-value);
    }
    if (changeY > 0) {
        m_position->setYValue(value);
    } else if (changeY < 0) {
        m_position->setYValue(-value);
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
