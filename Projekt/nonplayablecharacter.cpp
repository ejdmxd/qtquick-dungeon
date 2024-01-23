#include "nonplayablecharacter.h"
#include "player.h"

NonPlayableCharacter::NonPlayableCharacter(QObject *parent)
    : QObject{parent}
{

}

NonPlayableCharacter::NonPlayableCharacter(int positionX, int positionY){
    m_position->setXValue(positionX);
    m_position->setYValue(positionY);
}

void NonPlayableCharacter::checkProgress(Quest* quest){
    if(quest->getState()==Quest::QuestState::NotStarted){
        m_dialog = "Tak na co jeste cekas??";
    }else if(quest->getState()==Quest::QuestState::InProgress){
        m_dialog = "Jeste je kus prace pred tebou";
    }else if(quest->getState()==Quest::QuestState::Completed){
        m_dialog = "Dekuji za pomoc";
    }
}

Quest* NonPlayableCharacter::giveQuest(Player *player){
    return m_quest;
}

int NonPlayableCharacter::getNPCX() const {
    return m_position->getXValue();
}

int NonPlayableCharacter::getNPCY() const {
    return m_position->getYValue();
}
