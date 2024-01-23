#ifndef NONPLAYABLECHARACTER_H
#define NONPLAYABLECHARACTER_H

#include <QObject>
#include "position.h"
#include "quest.h"
#include "position.h"


class Player;

class NonPlayableCharacter : public QObject
{
    Q_PROPERTY(int npcx READ getNPCX CONSTANT)
    Q_PROPERTY(int npcy READ getNPCX CONSTANT)
    Q_PROPERTY(QString dialog READ getDialog NOTIFY dialogChanged())
    Q_PROPERTY(bool isDialogVisible READ getDialogVisibility NOTIFY visibilityChanged)

    Q_OBJECT
    Position* m_position = new Position;
    QString m_dialog = "Zdravim, diky, ze jsi prisel na pomoc,\npotrebuji pomoc zneskodnit vsechny\nmonstra v dungeonu";
    bool m_isDialogVisible = false;
    int m_enemiesNumber;
public:
    explicit NonPlayableCharacter(QObject *parent = nullptr);
    NonPlayableCharacter(int positionX, int positionY);
    Quest* m_quest = new Quest;
    void checkProgress(Quest* quest, int killCount);
    Quest* giveQuest(Player* player);
    int getNPCX() const;
    int getNPCY() const;
    QString getDialog() const;
    bool getDialogVisibility() const;
    void setEnemiesNumber(int enemiesNumber);
signals:
    void visibilityChanged();
    void dialogChanged();
};

#endif // NONPLAYABLECHARACTER_H
