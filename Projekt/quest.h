#ifndef QUEST_H
#define QUEST_H

#include <QObject>

class Map;

class Quest : public QObject
{
    Q_OBJECT
public:
    enum class QuestState {
        NotStarted,
        InProgress,
        Completed
    };
    QuestState m_state = QuestState::NotStarted;

    explicit Quest(QObject *parent = nullptr);

    QuestState getState();
    void checkState(Map* map, int killCount);
signals:

};

#endif // QUEST_H
