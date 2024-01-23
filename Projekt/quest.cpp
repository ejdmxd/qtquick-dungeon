#include "quest.h"
#include "map.h"

Quest::Quest(QObject *parent)
    : QObject{parent}
{

}

void Quest::checkState(Map* map, int killCount){
    if(killCount == 0){
        m_state = QuestState::NotStarted;
    }else if(killCount > 0 && killCount < map->getPocetNepratel()){
        m_state = QuestState::InProgress;
    }else if(killCount = map->getPocetNepratel()){
            m_state = QuestState::Completed;
        }
}

Quest::QuestState Quest::getState(){
    return m_state;
}
