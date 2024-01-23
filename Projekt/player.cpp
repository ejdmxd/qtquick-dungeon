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

void Player::takeDamage(int amount){
    m_isAttacked = true;
    emit isAttacked();
    QTimer::singleShot(300, [this, amount]() {
        m_health-= amount;
        m_isAttacked = false;
        emit isAttacked();
    });
}
Inventory* Player::getInventory(){
    return m_inventory;
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


bool Player::getIsAttacked() const {
    return m_isAttacked;
}


int Player::getHealth() const {
    return m_health;
}

int Player::getWeaponDmg(){
    return getInventory()->getGun()->getDamage();
}

QString Player::getWeaponName(){
    return getInventory()->getGun()->getName();
}

Gun* Player::getWeapon(){
    return getInventory()->getGun();
}

int Player::getArmorDef(){
    return getInventory()->getArmor()->getDef();
}

QString Player::getArmorName(){
    return getInventory()->getArmor()->getName();
}

Armor* Player::getArmor(){
    return getInventory()->getArmor();
}
