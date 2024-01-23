#include "potion.h"

Potion::Potion(int bonusHealth, int xPosition, int yPosition) : Items(xPosition, yPosition) {
    m_bonusHealth = bonusHealth;
}

int Potion::getBonusHealth()const{
    return m_bonusHealth;
}
void Potion::setBonusHealth(int newBonusHealth){
    m_bonusHealth = newBonusHealth;
}
