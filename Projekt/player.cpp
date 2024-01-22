#include "player.h"


Player::Player(QObject *parent) : QObject{parent}{
}

Player::Player(int health, int def){
    m_health = health;
    m_def = def;
    m_inventory = new Inventory();
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

Inventory* Player::getInventory(){
    return m_inventory;
    emit inventoryChanged();
}

int Player::getHealth(){
    return m_health;
}


int Player::getAttack(){
    if(getInventory()->getGun() == nullptr){
        return m_attack;
    }else{
        return m_attack + getInventory()->getGun()->getDamage();
    }
}

int Player::getDef(){
    if(getInventory()->getArmor() == nullptr){
        return m_def;
    }else{
        return m_def + getInventory()->getArmor()->getDef();
    }
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
