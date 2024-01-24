#include "quest.h"
#include <iostream>

Quest::Quest(QObject *parent)
    : QObject{parent}
{

}

Quest::Quest(int requirement){
    m_requirement = requirement;

}

//Podle poctu zabitych nepratel se urcuje postup ukolem
void Quest::checkState(int killCount){
    if(killCount == 0){
        m_state = QuestState::NotStarted;
    }else if(killCount > 0 && killCount < m_requirement){
        m_state = QuestState::InProgress;
    }else if(killCount >= m_requirement){
            m_state = QuestState::Completed;
        }
}

Quest::QuestState Quest::getState(){
    return m_state;
}

int Quest::getRequirement() const {
    return m_requirement;
}

//Kdyz npc potvrdi, ze quest je dokoncen, hra skonci
bool Quest::gameOver() const {
    return m_state == QuestState::Completed;
}
