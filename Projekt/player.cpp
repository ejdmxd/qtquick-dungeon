#include "player.h"
#include "room.h"
#include "quest.h"

Player::Player(QObject *parent) : QObject{parent}{
}

Player::Player(int health, int def){
    m_attack = 5;
    m_health = health;
    m_def = def;
    m_inventory = new Inventory();
    m_position->setXValue(100);
    m_position->setYValue(100);
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
    m_currentRoom->checkClosestItem(this);
    if(m_currentRoom->getNPC()){
        m_currentRoom->npcInteraction(this);
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

int Player::getNumberOfPotions(){
    return getInventory()->getNumberOfPotions();
}

void Player::drinkPotion(){
    getInventory()->drinkPotion();
    emit potionDrinked();
}

bool Player::potionsEmpty(){
    if(getInventory()->getNumberOfPotions() == 0){
        return 0;
    }else{
        return 1;
    }
}

void Player::heal(){
    int maxHealth = 1000;
    int healingAmount = 200;

    // Získání aktuálního zdraví hráče
    int currentHealth = getHealth();

    // Výpočet, kolik mu zbývá do maximální hodnoty
    int remainingHealth = maxHealth - currentHealth;

    // Přičtení životů s ohledem na maximální hodnotu
    if (remainingHealth > 0) {
        if (remainingHealth >= healingAmount) {
            // Můžeme přičíst celý počet healingAmount
            m_health += healingAmount;
        } else {
            // Přičteme pouze zbývající množství do maximální hodnoty
            m_health = maxHealth;
        }

        // Emitování signálu o změně životů
        emit isAttacked();
    }
}

void Player::dropArmor(){
    getInventory()->dropArmor();
    emit armorChange();
}

void Player::dropWeapon(){
    getInventory()->dropGun();
    emit weaponChange();
}


void Player::setRoom(Room *newRoom){
    m_currentRoom = newRoom;
}


void Player::setInteractionStatus(bool status){
    m_canInteract = status;
}

bool Player::getInteractionStatus() const {
    return m_canInteract;
}


void Player::interact(){
    if(m_canInteract){
        if(m_currentRoom->getNPC()==NULL){


        if(m_currentRoom->getClosestItem()->getName()=="Common Gun"){
            Gun* closestGun = dynamic_cast<Gun*>(m_currentRoom->getClosestItem());
            if(m_inventory->pickGun(closestGun)){
                emit weaponChange();
                m_currentRoom->playerPickedItem(m_currentRoom->getClosestItem());
            }
        }
        if(m_currentRoom->getClosestItem()->getName()=="Common Armor"){
            Armor* closestArmor = dynamic_cast<Armor*>(m_currentRoom->getClosestItem());
            if(m_inventory->pickArmor(closestArmor)){
                emit armorChange();
                m_currentRoom->playerPickedItem(m_currentRoom->getClosestItem());
            }
        }
        }

        if(m_currentRoom->getNPC()!=NULL){
           if(m_quest==NULL){
                m_quest=m_currentRoom->getNPC()->giveQuest(this);
            emit refreshQuest();
            }else{
                m_currentRoom->getNPC()->checkProgress(m_quest, m_killCount);
            }
        }
    }
}

QString Player::getQuestProgress() {
    if(m_quest!=NULL){
        std::string progres = "Zabito monster: " + std::to_string(m_killCount) + " / " + std::to_string(m_quest->getRequirement());
        QString novy = QString::fromStdString(progres);
        return novy;
    }
    return "/";
}
