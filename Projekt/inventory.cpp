#include "inventory.h"
#include <iostream>


Inventory::Inventory(){
    m_visible = false;
    m_gun = nullptr;
    m_armor = nullptr;
}
void Inventory::pickGun(Gun* g){
    if(m_gun == nullptr){
        m_gun = g;
        emit gunChanged();
    }else{
        std::cout << "You already have a weapon" << std::endl;
    }
}

void Inventory::dropGun(){
    if(m_gun == nullptr){
        std::cout << "You dont have any weapon" << std::endl;
    }else{
        m_gun = nullptr;
        emit gunChanged();
    }
}

void Inventory::pickArmor(Armor *a){
    if(m_armor == nullptr){
        m_armor = a;
    }else{
        std::cout << "You already have an armor" << std::endl;
    }
}

void Inventory::dropArmor(){
    if(m_armor == nullptr){
        std::cout << "You dont have any Armor" << std::endl;
    }else{
        m_armor = nullptr;
    }
}

Gun* Inventory::getGun() const {
    return m_gun;
}

Armor* Inventory::getArmor() const {
    return m_armor;
}

bool Inventory::isVisible()
{
    return m_visible;
}






