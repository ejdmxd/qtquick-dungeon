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

void NonPlayableCharacter::checkProgress(Quest* quest, int killCount){
    //TODO quest->checkState();
    if(quest->getState()==Quest::QuestState::NotStarted){
        m_dialog = "Tak na co jeste cekas??";
    }else if(quest->getState()==Quest::QuestState::InProgress){
        m_dialog = "Jeste je kus prace pred tebou";
    }else if(quest->getState()==Quest::QuestState::Completed){
        m_dialog = "Dekuji za pomoc";
    }
    emit dialogChanged();
    m_isDialogVisible = true;
    emit visibilityChanged();
    QTimer::singleShot(5000, [=]() {
        m_isDialogVisible = false;
        emit visibilityChanged();
    });
}

Quest* NonPlayableCharacter::giveQuest(Player *player){
    m_isDialogVisible = true;
    emit visibilityChanged();
    QTimer::singleShot(5000, [=]() {
        m_isDialogVisible = false;
        emit visibilityChanged();
    });
    return m_quest;
}

int NonPlayableCharacter::getNPCX() const {
    return m_position->getXValue();
}

int NonPlayableCharacter::getNPCY() const {
    return m_position->getYValue();
}

QString NonPlayableCharacter::getDialog() const{
    return m_dialog;
}

bool NonPlayableCharacter::getDialogVisibility() const {
    return m_isDialogVisible;
}

void NonPlayableCharacter::setEnemiesNumber(int enemiesNumber){
    m_enemiesNumber = enemiesNumber;
}
