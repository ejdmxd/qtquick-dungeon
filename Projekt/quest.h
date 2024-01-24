#ifndef QUEST_H
#define QUEST_H

#include <QObject>



class Quest : public QObject
{
    Q_OBJECT
private:
    int m_requirement;
public:
    enum class QuestState {
        NotStarted,
        InProgress,
        Completed
    };
    QuestState m_state = QuestState::NotStarted;

    explicit Quest(QObject *parent = nullptr);

    Quest(int requirement);

    QuestState getState();
    void checkState(int killCount);

    int getRequirement() const;
    bool gameOver() const;
signals:

};

#endif // QUEST_H
