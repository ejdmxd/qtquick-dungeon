#include "inventory.h"
#include <iostream>


Inventory::Inventory(){
    m_visible = false;
    m_gun = nullptr;
    m_armor = nullptr;
}
bool Inventory::pickGun(Gun* g){
    if(m_gun == nullptr){
        m_gun = g;
        emit gunChanged();
        return true;
    }else{
        std::cout << "You already have a weapon" << std::endl;
        return false;
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

bool Inventory::pickArmor(Armor *a){
    if(m_armor == nullptr){
        m_armor = a;
        emit armorChanged();
        return true;
    }else{
        std::cout << "You already have an armor" << std::endl;
        return false;
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

int Inventory::getNumberOfPotions()const
{
    int pocet = 0;
    if(m_potions.empty()){
        return 0;
    }else{
        for(auto p : m_potions){
            pocet++;
        }
    }
    return pocet;
}

void Inventory::pickPotion(Potion *p){
    if(getNumberOfPotions() < 3 ){
        m_potions.push_back(p);
    }
}

void Inventory::drinkPotion(){
    if(getNumberOfPotions() > 0){
        m_potions.pop_back();
    }
}






