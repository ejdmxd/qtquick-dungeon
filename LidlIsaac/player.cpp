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
    } else if (direction == "down") {
        m_position->setYValue(value);
    } else if (direction == "right") {
        m_position->setXValue(value);
    } else if (direction == "left") {
        m_position->setXValue(-value);
    }
    emit positionXChanged();
    emit positionYChanged();
}
