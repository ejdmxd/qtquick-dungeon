#include "quest.h"
#include <iostream>

Quest::Quest(QObject *parent)
    : QObject{parent}
{

}

Quest::Quest(int requirement){
    m_requirement = requirement;
    std::cout << m_requirement << std::endl;
    std::cout << m_requirement << std::endl;
    std::cout << m_requirement << std::endl;
    std::cout << m_requirement << std::endl;

}

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

Quest::getRequirement() const {
    return m_requirement;
}

bool Quest::gameOver() const {
    return m_state == QuestState::Completed;
}
